#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: The original number.
 * @m: The number to flip @n to.
 * Return: The necessary number of bits to flip to get @m from @n.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
