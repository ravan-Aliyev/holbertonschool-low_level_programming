#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints half of string.
 *@str: string.
 */
void puts_half(char *str)
{
	int i;
	int n = (strlen(str) - 1) / 2;

	for (i = 0; i <= n; i++)
	{
		printf("%c", str[i + n + 1]);
	}
	str[i] = '\0';
	putchar('\n');
}
