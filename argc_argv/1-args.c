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
	int i = 1;

	while (i < argc)
	{
		if (strlen(*(argv + i)) > 0)
		{
			i++;
		}
	}
	printf("%d", i - 1);
	return (0);
}
