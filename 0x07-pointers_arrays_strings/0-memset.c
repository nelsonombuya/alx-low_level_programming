#include "main.h"

/**
 * _memset - fill the first set of memory locations
 * with a constant byte
 *
 * @s: starting address of memory to be filled
 * @b: the desired value to fill the memory location
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
