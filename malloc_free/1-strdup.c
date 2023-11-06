#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Copy the string.
 * @str: string.
 *
 * Return: Copied char.
 */
char *_strdup(char *str)
{
	char *a = str == NULL ? NULL : (char *)malloc(sizeof(str) + 1);
	int i;

	if (a == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}

	return (a);
}
