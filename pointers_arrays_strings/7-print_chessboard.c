#include <stdio.h>
/**
 * print_chessboard - print chess board.
 * @a: array.
 */
void print_chessboard(char (*a)[8])
{
	unsigned long int i, j;


	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < sizeof(a[i]); j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
