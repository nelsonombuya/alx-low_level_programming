#include "main.h"
#define MAXSIZE 1024

/**
 * exitCode - Prints error messages and exits the program with a
 * relevant exit code.
 * @error: The Exit Code or the File Descriptor
 * @str: The name of 'fileIn' or 'fileOut'
 * @fd: The File Descriptor
 * Return: 0 on success
 */
int exitCode(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
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
	char buffer[MAXSIZE];
	int fileIn, fileOut, readStat, writeStat, closeIn, closeOut;

	if (argc != 3)
		exitCode(97, NULL, 0);

	fileIn = open(argv[1], O_RDONLY);
	if (fileIn == -1)
		exitCode(98, argv[1], 0);

	fileOut = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileOut == -1)
		exitCode(99, argv[2], 0);

	while ((readStat = read(fileIn, buffer, MAXSIZE)) != 0)
	{
		if (readStat == -1)
			exitCode(98, argv[1], 0);

		writeStat = write(fileOut, buffer, readStat);
		if (writeStat == -1)
			exitCode(99, argv[2], 0);
	}

	closeIn = close(fileIn);
	if (closeIn == -1)
		exitCode(100, NULL, fileIn);

	closeOut = close(fileOut);
	if (closeOut == -1)
		exitCode(100, NULL, fileOut);

	return (0);
}
