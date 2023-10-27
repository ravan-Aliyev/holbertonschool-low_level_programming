#include <stdio.h>
/**
 * _memcpy - replace string.
 * @dest: string.
 * @src: string what we changed to.
 * @n: how many characters we changed.
 *
 * Return: changing character.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (dest[i] != ' ')
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}
