#include <stdio.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
if (i == 4 || i == 16)
{
continue;
}
putchar('a' + i);
};

putchar('\n');
return (0);
}
