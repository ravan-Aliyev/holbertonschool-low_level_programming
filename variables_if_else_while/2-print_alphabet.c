#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints if number is postive or negative.
 *
 *Return: Always 0.
 */
int main(void)
{
int letter = 0;
while (letter < 26)
{
putchar('a' + letter);
letter++;
};
putchar('\n');
return (0);
}
