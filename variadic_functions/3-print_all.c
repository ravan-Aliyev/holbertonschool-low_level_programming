#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - Prints all things.
 * @format: Format of thing.
 */
void print_all(const char * format, ...)
{
	va_list args;
	char check[] = {'c', 'i', 'f', 's'};
	size_t i = 0;
	int j = 0;
	char *x;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
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
		}

		if (i != strlen(format) - 1 && format[i] == check[j])
		{
			printf(", ");
			j++;
		}
		i++;
        }

	printf("\n");
	va_end(args);
}
