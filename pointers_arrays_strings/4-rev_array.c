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
	int j = 0;
	int copy[1000];

	for (i = n - 1; i >= 0; i--)
	{
		a[j] = copy[i];
		j++;
	}
}
