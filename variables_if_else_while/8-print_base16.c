#include <stdio.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar('0' + i);
}
if (i >= 10)
{
putchar('a' + (i - 10));
}
};

putchar('\n');
return (0);
}
