#include <stdio.h>
/**
 * swap_int - swap values.
 * @a: number.
 * @b: number.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
