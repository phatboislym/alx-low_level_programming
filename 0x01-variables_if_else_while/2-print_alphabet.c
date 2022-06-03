#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *program prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
