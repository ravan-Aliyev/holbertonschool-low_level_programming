#include <stdio.h>
/**
 * linear_search - serch value with linear search algorithm.
 * @array: array.
 * @size: size of array.
 * @value: value for search.
 *
 * Return: idex of thr value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
