#include <stdio.h>

/**
 * main - Entry point
 * Description: Print numbers 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
