#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to be created
 * @text_content: The content to be written to the file during creation
 * Return: -1 upon failure; 1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file, fileWrite, length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (length = 0; text_content[length]; length++)
			continue;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fileWrite = write(file, text_content, length);

	if (file == -1 || fileWrite == -1)
		return (-1);

	close(file);
	return (1);
}
