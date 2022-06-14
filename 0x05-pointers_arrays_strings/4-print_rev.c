#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input string parameter
 *
 */
void print_rev(char *s)
{
	int l = 0;

	while (l >= 0)
	{
		if (s[l] == '\0')
		{
			break;
		}
		l++;
	}
	for (l--; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
