#include <stdio.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
