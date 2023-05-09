#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file the buffer is created for.
 * Return: A pointer fileTo the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write fileTo %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 * Return: void
 */
void close_file(int fd)
{
	int closeFD;

	closeFD = close(fd);

	if (closeFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file into another file.
 * @argc: The number of arguments supplied fileTo the program.
 * @argv: The array of pointers fileTo the arguments supplied to the program.
 * Return:
 * 0 on success.
 * 97 if the argument count is incorrect
 * 98 if the @file_from parameter does not exist or cannot be read
 * 99 if the @file_to parameter cannot be created or written into
 * 100 if the @file_to parameter or @file_from parameter cannot be closed
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int fileFrom, fileTo, fileRead, fileWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fileFrom = open(argv[1], O_RDONLY);
	fileRead = read(fileFrom, buffer, 1024);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (fileFrom == -1 || fileRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read fileFrom file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		fileWrite = write(fileTo, buffer, fileRead);
		if (fileTo == -1 || fileWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write fileTo %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		fileRead = read(fileFrom, buffer, 1024);
		fileTo = open(argv[2], O_WRONLY | O_APPEND);

	} while (fileRead > 0);

	free(buffer);
	close_file(fileFrom);
	close_file(fileTo);

	return (0);
}
