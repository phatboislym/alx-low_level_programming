#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* program that prints all single digit numbers of base 10 starting from 0
* program can use putchar but cannot use the char variable type
*
* Return: Always 0 (Success)
*/

int main(void)
{

int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

return (0);
}
