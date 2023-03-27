#include "main.h"
/**
 * _strlen - print size of string based
 * on its pointer
 * @s: pointer to string/array of charachters
 * Return: the length of the string/array of charachters
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
