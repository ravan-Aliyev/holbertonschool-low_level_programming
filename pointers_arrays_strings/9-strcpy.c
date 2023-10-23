#include <stdio.h>
#include <string.h>
/**
 * _strcpy - print reverse value.
 * @dest: string.
 * @src: string.
 *
 * Return: copy of value.
*/

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < strlen(src); i++)
	{
		if (src[i] != '\0')
		{
		dest[i] = src[i];
		}
	}

	return (dest);
}
