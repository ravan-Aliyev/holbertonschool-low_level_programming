#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum all arguments.
 * @n: number of arguments.
 *
 * Return: Result of calc.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	long int result = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		result += x;
	}

	va_end(args);
	return (result);
}
