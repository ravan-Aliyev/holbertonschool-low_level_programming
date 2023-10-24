#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two string
 * @dest: string.
 * @src: string.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	dest[strlen(dest)] = '\0';

	return (dest);
}
