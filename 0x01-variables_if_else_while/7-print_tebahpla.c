#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
* program prints the lowercase alphabet in reverse
*
* program uses only the putchar function (every other function forbidden)
*
* Return: Always 0 (Success)
*/

int main(void)

{
char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');
	return (0);
}
