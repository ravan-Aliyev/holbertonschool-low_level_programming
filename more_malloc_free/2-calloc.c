#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Do what calloc do.
 * @nmemp: number of memory.
 * @size: size of memory.
 *
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = malloc(nmemb * size);

	if (arr == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	return (arr);
}
