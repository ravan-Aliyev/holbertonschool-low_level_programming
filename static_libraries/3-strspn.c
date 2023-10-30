#include <stdio.h>
/**
 * _strspn - count words.
 * @s: string.
 * @accept: charcter.
 *
 * Return: changing character.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int num = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
			}
		}
	}
	return (num);
}
