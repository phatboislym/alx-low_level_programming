#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n - int being checked
*/

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n <= 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
