#include <stdio.h>
#include "main.h"
/**
 *times_table - Prints time table.
 */
void times_table(void)
{
	int i;
	int j;
	int times;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (times <= 9)
				{
					_putchar(' ');
				}
			}

			if (times >= 10)
			{
				_putchar(((times / 10) % 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar(times + '0');
			}
		}
		_putchar('\n');
	}
}
