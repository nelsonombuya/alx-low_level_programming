#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
