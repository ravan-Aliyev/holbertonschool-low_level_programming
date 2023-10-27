#include <stdio.h>
/**
 *print_diagsums - Prints sum of the diagonals.
 *@a: array.
 *@size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (int i = size - 1; i < size*size - size + 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
