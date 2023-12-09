#include <stdio.h>
/**
 * set_bit - setting 1 bit to the index.
 * @n: number.
 * @index: index.
 *
 * Return: 1 success -1 fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int d = *n;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
		d >>= 1;
	d += 1;

	for (i = 0; i < index; i++)
		d <<= 1;

	*n = d | *n;

	return (1);
}
