#include <stdio.h>
/**
 * _strchr - cut string.
 * @s: string.
 * @b: charcter.
 *
 * Return: changing character.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *result = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			*result = &s[i];
		}
	}
	return (result);
}
