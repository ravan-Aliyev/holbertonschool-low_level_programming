#include <stdio.h>
/**
 *_pow_recursion - Find power of a number.
 *@x: number.
 *@y: power.
 *
 *Return: -1 if n less than zero, 1 if n equal zero or one, otherwise factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	y--;
	return (x * _pow_recursion(x, y));
}
