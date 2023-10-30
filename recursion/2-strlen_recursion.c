#include <stdio.h>
/**
 * _strlen_recursion - Find length of string.
 * @s: string.
 *
 * Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	i++;
	return (i + _strlen_recursion);
}
