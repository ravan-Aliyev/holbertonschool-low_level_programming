#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints last digit and compire it.
 *
 *Return: Always 0.
 */
int main(void)
{
int n, lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastdigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
else
{
printf("Last digit of %d is %d and is grather than 5\n", n, lastdigit);
}
return (0);
}
