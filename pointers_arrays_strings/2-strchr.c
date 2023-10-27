#include <stdio.h>
/**
 * _strchr - cut string.
 * @s: string.
 * @c: charcter.
 *
 * Return: changing character.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' + 1)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
