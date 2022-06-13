void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}#include "main.h"

/**
 * main - Entry point
 * print_triangle - prints a triangle using the character #
 * followed by a new line
 * @size is the size of the triangle
 * size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int row, column, space, pound;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		column = size - 1 - row;

		for (space = column; space > 0; space--)
			_putchar(' ');
		for (pound = size - column; pound > 0; pound--)
			_putchar(35);

		_putchar('\n');
	}
}
