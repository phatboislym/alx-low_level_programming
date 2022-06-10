#include "main.h"
/**
 * print_last_digit - function to ptint last digit
 * @n: check code
 *
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
