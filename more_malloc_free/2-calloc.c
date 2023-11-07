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
	unsigned int i, j;

	if (arr == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		unsigned char *element = (unsigned char *)arr + (i * size);

		for (j = 0; j < size; j++)
		{
			element[j] = 0;
		}
	}

	return (arr);
}
