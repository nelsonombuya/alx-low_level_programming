#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: array pointer
 * @n: number of element in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		if (b != n - 1)
		{
			printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
		}
	}
	putchar('\n');
}
