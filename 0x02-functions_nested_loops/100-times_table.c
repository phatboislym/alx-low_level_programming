#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer input parameter
 */

void print_times_table(int n)
{
int row, column, product, middleDigit;

if ((n > -1) && (n < 16))
{
	for (row = 0; row < (n + 1); row++)
	{
		_putchar(48);
		_putchar(44);
		for (column = 1; column < (n + 1); column++)
		{
			product = row * column;
			if ((product / 100) > 0)
			{
				_putchar((product / 100) + '0');
			}
			else
			{
				_putchar(32);
			}

			if ((product % 100 >= 0) && (product / 10 > 0))
			{
				middleDigit = (product % 100);
				_putchar((middleDigit / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
			_putchar((product % 10) + '0');
			if (column < n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
