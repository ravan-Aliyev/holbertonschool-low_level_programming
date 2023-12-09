#include <stdio.h>
/**
 * get_bit - Getting bit of number.
 * @n: number.
 * @index: index.
 *
 * Return: Bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;
	unsigned int i;

	if (index > 31)
		return (-1);

	for (i = 0; i < index; i++)
		n >>= 1;

	result = n & 1;
	return (result);
}
