#include <stdio.h>
#include "main.h"
/**
 *main - Prints Fizz Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0 || i % 5 == 0)
		{
			i % 3 == 0 ? printf("Fizz ") : printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
