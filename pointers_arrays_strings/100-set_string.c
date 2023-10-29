#include <stdio.h>
/**
 * set_string - Set s to another string.
 * @s: Pointer to pointer.
 * @to: pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
