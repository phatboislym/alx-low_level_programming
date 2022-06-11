#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @x: number of times printed
 *
 * Return: void
 */

void print_line(int x)
{
	int i;

	for (i = 0; i < x; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
