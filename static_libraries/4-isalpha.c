#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isalpha - Check c is letter or not.
 *@c: is character for the check
 *
 *Return: 1 if c is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
