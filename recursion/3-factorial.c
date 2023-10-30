#include <stdio.h>
/**
 *factorial - Find factorial of a number.
 *@n: number.
 *
 *Return: -1 if n less than zero, 1 if n equal zero or one, otherwise factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	n--;
	return ((n + 1) * factorial(n));
}
