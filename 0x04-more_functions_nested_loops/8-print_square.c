#include "main.h"

/**
* print_square - prints a square, followed by a new line
*
* @size: square's size
*
* Return: 0
*/
void print_square(int size)
{
	int a = 0, b;

	while (a < size)
	{
		b = 0;

		while (b < size)
		{
			_putchar(35);
			b++;
		}
		a++;

		if (a != size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
