#include "main.h"
/**
 * _puts - print a string in reverse
 * @str: pointer to string array
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;
	int b = 0;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
