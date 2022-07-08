#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguements
 * Return: 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	unsigned int x;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(nums, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
