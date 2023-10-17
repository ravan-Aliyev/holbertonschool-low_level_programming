#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_last_digit - Check c is letter or not.
 *@n: is number for the check.
 *
 *Return: Last digit of n.
 */
int print_last_digit(int n)
{
	int y = n % 10;
	
	if(y < 0)
	{
		y *= -1;
	}

	_putchar(y + '0');
	return (y);
}
