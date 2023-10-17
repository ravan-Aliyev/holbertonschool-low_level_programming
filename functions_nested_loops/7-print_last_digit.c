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
	int y = abs(n) % 10;
	int lastdigit = (y * 10) + y;

	return (lastdigit);
}
