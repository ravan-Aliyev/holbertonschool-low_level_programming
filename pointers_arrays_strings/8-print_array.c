#include <stdio.h>
#include <string.h>
/**
 * print_array - print value of array.
 * @a: array.
 * @n: length of arr.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	putchar('\n');
}