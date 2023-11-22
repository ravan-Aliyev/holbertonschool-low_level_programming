#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints number.
 * @separator: seperator character.
 * @n: size of args.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (x == NULL)
			x = "(nil)";

		if (i != n - 1 && separator != NULL)
			printf("%s%s", x, separator);
		if (i == n - 1 || separator == NULL)
			printf("%s", x);
	}

	putchar('\n');
	va_end(args);
}
