#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatinate string.
 * @s1: string.
 * @s2: string.
 *
 * Return: String.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;
	int index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
		index++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		arr[index] = s2[i];
		index++;
	}

	return (arr);

}
