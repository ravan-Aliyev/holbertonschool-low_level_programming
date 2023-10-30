#include <stdio.h>
/**
 *_puts_recursion - Print string.
 *@s: string.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
		return;
	}
	putchar('\n');
}
