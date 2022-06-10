#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @x: integer to check
 * Return: 0 or 1
/

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (x == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
