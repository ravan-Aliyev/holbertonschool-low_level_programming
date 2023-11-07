#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory with malloc.
 * @b: size of array.
 *
 * Return: void arr.
 */
void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
