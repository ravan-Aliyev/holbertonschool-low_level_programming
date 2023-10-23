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
		dest[i] = src[i];
	}
	dest[strlen(src)] = '\0';

	return (dest);
}
