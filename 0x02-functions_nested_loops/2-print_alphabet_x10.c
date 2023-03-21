#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet 10 times
 * Description: print lowercase alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
