#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatinate two string.
 * @s1: string.
 * @s2: string.
 * @n: size of string two.
 *
 * Return: Concatinate string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i;
	int index = 0;
	int length = (n == strlen(s2) || n > strlen(s2)) ? strlen(s2) : n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr = malloc(strlen(s1) + strlen(s2) + 2);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
		index++;
	}

	for (i = 0; i < length; i++)
	{
		arr[index] = s2[i];
		index++;
	}

	return (arr);
}
