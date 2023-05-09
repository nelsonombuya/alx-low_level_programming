#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints the files contents
 * to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: 0 if the function fails, or @filename is NULL;
 * Else, prints the number of letters the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	ssize_t fileOpen, fileRead, fileWrite;

	fileOpen = open(filename, O_RDONLY);
	fileRead = read(fileOpen, buffer, letters);
	fileWrite = write(STDOUT_FILENO, buffer, fileRead);

	if (
		fileOpen == -1 ||
		fileRead == -1 ||
		fileWrite == -1 ||
		fileWrite != fileRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fileOpen);

	return (fileWrite);
}
