#include <stdio.h>
#include "main.h"
/**
 *print_sign - Check c is lowercase or not.
 *@n: is number for the check
 *
 *Return: 1 if n grather than zero, 0 if n is zero, -1 if n less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
