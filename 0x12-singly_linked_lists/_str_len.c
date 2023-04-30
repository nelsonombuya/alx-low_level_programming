#include <stdlib.h>

/* Helper Functions */
/**
 * _str_len - Counts the number of characters in a string
 * @str: The character array
 * Return: The number of characters in the string
 */
size_t _str_len(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
