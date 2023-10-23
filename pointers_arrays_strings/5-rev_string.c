#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - Reverse value.
 * @s: string.
*/

void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int i;
	char copy[100];

	for (i = 0; i <= len; i++)
	{
		copy[i] = s[i];
	}

	for (i = 0; i <= len; i++)
	{
		int index = abs(len - i);

		s[i] = copy[index];
	}
}
