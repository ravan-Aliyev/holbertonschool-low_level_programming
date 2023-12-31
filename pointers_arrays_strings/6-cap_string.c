#include <stdio.h>
/**
 *cap_string - capitalize string.
 *@str: string.
 *
 * Return: Capitalized string.
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char sepe[] = " ,.;!?\"({)}\n\t";
	int isFirst = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i];
		}
		else
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			{
				for (j = 0; sepe[j] != '\0'; j++)
				{
					if (str[i - 1] == sepe[j] || isFirst)
					{
						str[i] -= 32;
						isFirst = 0;
					}
				}
			}
			else
			{
				str[i] = str[i];
			}
		}
	}
	str[i] = '\0';
	return (str);
}
