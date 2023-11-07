#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory with malloc.
 * @b: size of array.
 */
void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);

	if (arr == NULL)
	{
		return (void *)98;
	}
	return (arr);
}
