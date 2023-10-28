#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints half of string.
 *@str: string.
 */
void puts_half(char *str)
{
	size_t i;
	int n = strlen(str) % 2 == 0 ? strlen(str) / 2 : (strlen(str) / 2) + 1;

	for (i = n; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
