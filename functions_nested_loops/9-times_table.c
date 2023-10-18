#include <stdio.h>
#include "main.h"
/**
 *times_table - Prints time table.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int times = i * j;

			if (times <= 9)
			{
				printf(" ");
			}
			else
			{
				printf("%d", times / 10);
			}
			if (times != 0)
			{
				printf("%d", times % 10);
			}
			if (j < 9)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
