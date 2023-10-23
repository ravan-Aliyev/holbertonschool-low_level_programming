#include <stdio.h>
#include <string.h>
/**
 * _strcpy - print reverse value.
 * @dest: string.
 * @src: string.
*/

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < strlen(src) - 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
