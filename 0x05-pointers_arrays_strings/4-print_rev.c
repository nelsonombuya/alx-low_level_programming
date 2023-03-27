#include "main.h"
/**
 * _puts - print a string in reverse
 * @s: pointer to string array
 * Return: 0
 */
void _puts(char *s)
{
	int a = 0;
	int b = 0;

	while (*(s + a) != '\0')
	{
		_putchar(*(s + a));
		a++;
	}

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
