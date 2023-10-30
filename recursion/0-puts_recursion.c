#include <stdio.h>
/**
 *_puts_recursion - Print string.
 *@s: string.
 */
void _puts_recursion(char *s)
{
	static int i = 0;

	if (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
		_puts_recursion(s);
		return;
	}
	putchar('\n');
}
