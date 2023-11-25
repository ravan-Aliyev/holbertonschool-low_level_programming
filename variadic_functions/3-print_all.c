#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - Prints all things.
 * @format: Format of thing.
 */
void print_all(const char *format, ...)
{
	va_list args;
	size_t i = 0;
	char *x;

	va_start(args, format);
	while (format[i] != '\0' && format)
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				x = va_arg(args, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
		
	}
	printf("\n");
	va_end(args);
}
