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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
