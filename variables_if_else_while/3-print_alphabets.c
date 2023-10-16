#include <stdio.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int letter = 0;
while (letter < 52)
{
if (letter < 26)
{
putchar('a' + letter);
}
else
{
putchar('A' + (letter - 26));
}
letter++;
};
putchar('\n');
return (0);
}
