#include <stdio.h>
#include <string.h>
/**
 * _strcmp - concatenates two string
 * @s1: string.
 * @s2: string.
 *
 * Return: Concatinate string.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (diff);
}
