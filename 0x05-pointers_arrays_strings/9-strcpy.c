#include "main.h"
/**
 * _strcpy - copy string between variables
 * @dest: destination variable
 * @src: source variable
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
