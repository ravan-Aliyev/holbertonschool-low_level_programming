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
	if (index > 32)
		return (-1);

	*n &= ~(1 << index);	

	return (1);
}
