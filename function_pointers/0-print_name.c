#include <stdio.h>
/**
 * print_name - Prints name.
 * @name: name of the person.
 * @f: function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
