#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints the first 98 Fibonacci numbers, starting with 1
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	/* Printing the first 90 Numbers in the sequence */
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	/** 
	 * Dividing the numbers into 2 in order to save space
	 * in order to continue using unsigned long int
	 */
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	/* Printing the remaining numbers in the sequence */
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
