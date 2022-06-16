#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer input parameter
 * @n: integer input parameter
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
