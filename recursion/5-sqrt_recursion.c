#include <stdio.h>
/**
 *find_sqrt - find sqrt of number.
 *@num: number.
 *@root: number.
 *
 * Return: Sqrt of number.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 *_sqrt_recursion - show sqrt of number.
 *@n: Number.
 *
 * Return: Result of find_sqrt.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
