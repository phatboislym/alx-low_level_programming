#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: - integer parameter 1
 * @b: - integer parameter 2
 */

void swap_int(int *a, int *b)
{
int n;

	n = *a;
	*a = *b;
	*b = n;
}
