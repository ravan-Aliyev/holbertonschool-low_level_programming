#include <stdio.h>
/**
 * flip-bits - finds how many bits must change for the find m number.
 * @n: number.
 * @m: number.
 *
 * Return: Number of bits need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0, j = 0, r = 0;

	while (n || m)
	{
		k = n & 1;
		j = m & 1;

		if (k != j)
			r += 1;
		n >>= 1;
		m >>= 1;
	}

	return (r);
}
