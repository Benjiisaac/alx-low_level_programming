#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 * @c: trmporary variable holding value of a
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
