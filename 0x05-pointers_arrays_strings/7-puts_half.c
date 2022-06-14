#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * if the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: string input parameter
*/

void puts_half(char *str)
{
int x, n, len;

	len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
