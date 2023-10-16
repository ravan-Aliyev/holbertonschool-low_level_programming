#include <stdlib.h>
#include <time.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 if (n > 0)
   {
     printf("%d is positive", n);
   }
 else if (n == 0)
   {
     printf("%d is zero", n);
   }
 else
   {
     printf("%d is negative", n);
   }
return (0);
}
