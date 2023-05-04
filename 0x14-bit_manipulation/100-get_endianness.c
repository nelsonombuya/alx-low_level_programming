#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if big-endian; 1 if little endian.
 */
int get_endianness(void)
{
	int num = 1;

	if ((char *)&num == 1)
		return (1);

	return (0);
}
