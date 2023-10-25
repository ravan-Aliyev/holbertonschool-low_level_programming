#include <stdio.h>
#include <string.h>
/**
 *string_toupper - Return string to upper
 *@str: String
 *
 *Return: New string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i];
		}
		else
		{
			if (str[i] == ' ')
			{
				str[i] = ' ';
			}
			else if (str[i] == '\n')
			{
				str[i] = '\n';
			}
			else
			{
				str[i] = str[i] - 32;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
