#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check character is digit or not.
 *@c: character to be checked.
 *
 * Return: 1 if character is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
