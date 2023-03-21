#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints the sum of even-valued Fibonacci numbers
 *		not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib3, tot_sum;

	while (1)
	{
		fib3 = fib1 + fib2;
		if (fib3 > 4000000)
			break;

		if ((fib3 % 2) == 0)
			tot_sum += fib3;

		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%lu\n", tot_sum);

	return (0);
}
