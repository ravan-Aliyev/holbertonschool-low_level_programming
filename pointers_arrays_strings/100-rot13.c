#include <stdio.h>
/**
 *rot13 - Convert normal string to rot13.
 *@s: string.
 *
 * Return: Rot13 string.
 */
char *rot13(char *s)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot13letters[j];
				break;
			}
		}
	}
	return (s);
}
