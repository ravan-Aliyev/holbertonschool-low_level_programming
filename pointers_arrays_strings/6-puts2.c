#include <stdio.h>
#include <string.h>
/**
 * puts2 - print reverse value.
 * @str: string.
*/

void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str) - 1; i += 2)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
