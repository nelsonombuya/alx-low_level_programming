#include "main.h"
/**
 * rev_string - reverses a string
 * based on it's pointer
 * @s: charachter array/string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c[510];
	int d = 0;

	while (s[a] != '\0')
	{
		c[a] = s[a];
		a++;
	}
	c[a] = '\0';
	d = a;
	for (b = 0; b < d; b++)
	{
		s[b] = c[a - 1];
		a--;
	}
}
