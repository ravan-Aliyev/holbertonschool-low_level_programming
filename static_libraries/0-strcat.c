#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two string
 * @dest: string.
 * @src: string.
 *
 * Return: Concatinate string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
