#include "main.h"
/**
 * swap_int - swaps the value of two
 * integers based on their pointers
 * @a: pointer to one of the integers
 * @b: pointer to the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
