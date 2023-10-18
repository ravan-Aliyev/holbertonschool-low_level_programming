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
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			times = i * j;

			if (times <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((times / 10) + '0');
			}
			_putchar((times % 10) + '0');
		}
		printf("\n");
	}
}
