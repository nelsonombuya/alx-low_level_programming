#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print a sequence from a given number to 98
 * @num: starting number
 * Return: void
 */
void print_to_98(int num)
{
	while (num != 98)
	{
		printf("%d", num);

		if (num > 98)
			--num;
		else if (num < 98)
			++num;

		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
