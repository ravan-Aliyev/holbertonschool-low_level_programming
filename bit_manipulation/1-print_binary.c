#include <stdio.h>
/**
 * print_binary - Print binary numbers.
 * @n: binary number.
 */
void print_binary(unsigned long int n)
{
	int result = 0;

	if (n > 1)
		print_binary(n >> 1);

	result = n & 1;
	putchar('0' + result);
}
