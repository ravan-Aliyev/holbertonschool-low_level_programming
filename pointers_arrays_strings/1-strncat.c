#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two string
 * @dest: string.
 * @src: string.
 * @n: number of characters.
 *
 * Return: Concatinate string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
