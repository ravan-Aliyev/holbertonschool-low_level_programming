#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints number.
 * @separator: seperator character.
 * @n: size of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			if (i != n - 1)
				printf("%d%s", x, separator);
			if (i == n - 1)
				printf("%d\n", x);
		}
	}

	va_end(args);
}
