#include <stdio.h>
/**
 *factorial - Find factorial of a number.
 *@n: number.
 *
 *Return: -1 if n less than zero, 1 if n equal zero or one, otherwise factorial
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
