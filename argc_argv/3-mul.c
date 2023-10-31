#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints multiple of two arguments.
 * @argc: Count of arguments.
 * @argv: Vector of arguments.
 *
 * Return: Success.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
