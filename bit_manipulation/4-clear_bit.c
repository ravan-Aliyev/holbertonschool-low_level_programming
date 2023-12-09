#include <stdio.h>
/**
 * clear_bit - setting 0 bit to the index.
 * @n: number.
 * @index: index.
 *
 * Return: 1 success -1 fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int d = *n;

	if (index > 32)
		return (-1);

	for (i = 0; i < index + 1; i++)
		d >>= 1;

	for (i = 0; i < index + 1; i++)
		d <<= 1;

	if (*n & 1)
		*n |= d;
	else
		*n &= d;

	return (1);
}
