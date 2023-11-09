#include <stdlib.h>
/**
 * array_range - Create array of integer.
 * @min: minimum number.
 * @max: maximum number.
 *
 * Return: Array of integer.
 */
int *array_range(int min, int max)
{
	int *arr;
	int length;
	int i;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
