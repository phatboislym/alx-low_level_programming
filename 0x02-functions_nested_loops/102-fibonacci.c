#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{

int i = 0;
unsigned long x = 0;
unsigned long y = 1;
unsigned long sum = 0;
for (i = 0; i < 50; i++)
{
	sum = (x + y);
	if (i < 49)
	{
		printf("%lu, ", sum);
	}
	else
	{
		printf("%lu\n", sum);
	}
	x = y;
	y = sum;
}
return (0);
}
