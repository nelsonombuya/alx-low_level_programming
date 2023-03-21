#include "main.h"

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n')
}
