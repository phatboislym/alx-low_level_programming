#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: integer input parameter
 * Return: no return
 */

void print_to_98(int n)
{
if (n < 98)
{
	for (; n < 98; n++)
	printf("%i, ", n);
	printf("%i\n", n);
}
else if (n > 98)
{
	for (; n > 98; n--)
	printf("%i, ", n);
	printf("%i\n", n);
}
else
	printf("%i\n", n);
}
