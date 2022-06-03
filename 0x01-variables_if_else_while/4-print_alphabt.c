#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* program prints the alphabet in lowercase, followed by a new line.
* program prints all the letters except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

		return (0);
}
