#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copy string.
 * @dest: string.
 * @src: string.
 * @n: number of character.
 *
 * Return: Concatinate string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
