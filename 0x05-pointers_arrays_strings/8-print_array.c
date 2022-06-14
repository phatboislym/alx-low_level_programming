#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by a \n
 * numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order as found in the array
 * @a: array pointer input parameter
 * @n: interger input parameter
 */

void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	putchar('\n');
}
