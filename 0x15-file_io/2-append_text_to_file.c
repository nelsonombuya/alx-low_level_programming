#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the string to add to the end of the file.
 * Return: -1 if:
 * The function fails.
 * The filename is NULL.
 * The file does not exist.
 * The user lacks write permissions.
 *
 * Otherwise returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fileWrite, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			continue;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	fileWrite = write(file, text_content, length);

	if (file == -1 || fileWrite == -1)
		return (-1);

	close(file);
	return (1);
}
