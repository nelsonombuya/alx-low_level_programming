#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of times the character should
 * be printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
