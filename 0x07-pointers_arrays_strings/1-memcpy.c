#include "main.h"
/**
 * _memcpy - copies @n bytes from memory area
 * @src to memory area @dest
 *
 * @dest: memory where the bytes are copies from
 * @src: memory where the bytes are copied to
 * @n: numbers of bytes to copy
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
