#include <stdio.h>
#include <string.h>
/**
 * print_rev - print reverse value.
 * @s: string.
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
