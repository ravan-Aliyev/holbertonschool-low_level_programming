#include <stdlib.h>
/**
 * alloc_grid - Make 2d dimensional array.
 * @width: column of array.
 * @height: rows of array.
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if ((width == 0 || width < 0) || (height == 0 || height < 0))
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
	}

	return (arr);
}
