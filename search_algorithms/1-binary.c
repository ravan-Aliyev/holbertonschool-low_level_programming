#include <stdio.h>
/**
 * binary_search - serch value with linear search algorithm.
 * @array: array.
 * @size: size of array.
 * @value: value for search.
 *
 * Return: idex of thr value.
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, j;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
