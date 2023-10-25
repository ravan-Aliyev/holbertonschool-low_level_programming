#include <stdio.h>
#include <string.h>
/**
 * reverse_array - concatenates two string
 * @a: array.
 * @n: number of characters.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
