#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Character pointer to the binary number string.
 * Return: Converted Unsigned Integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len = 0;
	int base_two_num;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;

	for (len--, base_two_num = 1; len >= 0; len--, base_two_num *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two_num;
		}
	}

	return (ui);
}
