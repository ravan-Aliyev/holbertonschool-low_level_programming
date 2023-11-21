#include <stdio.h>
/**
 * int_index - Searches for an intiger.
 * @array: array of intiger.
 * @size: size of array.
 * @cmp: function pointer.
 *
 * Return: Intiger.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
