#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: integer parameter
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
