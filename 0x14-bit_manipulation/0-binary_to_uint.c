#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Character pointer to the binary number string.
 * Return: Converted Unsigned Integer.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int ui = 0;

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ui = (ui << 1) | (*b - '0');
	}

	return (ui);
}
