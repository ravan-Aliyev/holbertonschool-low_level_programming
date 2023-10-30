#include <stdio.h>
/**
 * _memset - replace string.
 * @s: string.
 * @b: string what we changed to.
 * @n: how many characters we changed.
 *
 * Return: changing character.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (s[i] != ' ')
		{
			s[i] = b;
		}
	}
	return (s);
}
