#include "main.h"
/**
 *print_number - Prints number.
 *@n: Number.
 *
 */
void print_number(int n)
{
	int swap = 0;

	if (n > 0 || n < 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		while (n > 0)
		{
			int last = n % 10;

			swap = swap * 10 + last;
			n /= 10;
		}

		while (swap > 0)
		{
			int last = swap % 10;

			_putchar(last + '0');
			swap /= 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
