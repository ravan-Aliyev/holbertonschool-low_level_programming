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
	int money;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	coins = 0;

	while (money > 0)
	{
		coins++;
		if (money >= 25)
		{
			money -= 25;
			continue;
		}
		if (money >= 10)
		{
			money -= 10;
			continue;
		}
		if (money >= 5)
		{
			money -= 5;
			continue;
		}
		if (money >= 2)
		{
			money -= 2;
			continue;
		}
		money--;
	}
	printf("%d\n", coins);
	return (0);
}
