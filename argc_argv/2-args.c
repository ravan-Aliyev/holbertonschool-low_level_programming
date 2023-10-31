#include <stdio.h>
#include <string.h>
/**
 * main - print arguments
 * @argc: size of argument.
 * @argv: array of argument.
 *
 * Return: Succsess.
 */
int main(int argc, char *argv[])
{
	int i;
	size_t j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			printf("%d\n", argv[i][j]);
		}
	}
	return (0);
}
