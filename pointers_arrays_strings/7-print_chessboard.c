#include <stdio.h>
/**
 * _strpbrk - cut string.
 * @s: string.
 * @accept: charcter.
 *
 * Return: changing character.
 */
void print_chessboard(char (*a)[8])
{
	long unsigned int i, j;


	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < sizeof(a[i]); j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
