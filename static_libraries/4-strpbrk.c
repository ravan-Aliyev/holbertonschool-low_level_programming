#include <stdio.h>
/**
 * _strpbrk - cut string.
 * @s: string.
 * @accept: charcter.
 *
 * Return: changing character.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
