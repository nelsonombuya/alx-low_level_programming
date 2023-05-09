#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints the files contents
 * to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: 0 if the function fails, or @filename is NULL;
 * Else, prints the number of letters the function read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, fileWrite, text;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	text = read(file, buffer, letters);
	fileWrite = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file);
	return (fileWrite);
}
