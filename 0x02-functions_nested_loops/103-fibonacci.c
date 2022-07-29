#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line. finds and
 * prints the sum of the even-valued terms, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
int i = 0;
unsigned long x = 0;
unsigned long y = 1;
unsigned long sum = 0;
unsigned long runningSum = 0;
unsigned long evenSum = 0;

for (i = 0; i < 32; i++)
{
	sum = (x + y);
if (sum % 2 == 0)
{
	evenSum = evenSum + sum;
}
x = y;
y = sum;
runningSum += sum;
}
printf("%lu\n", evenSum);
return (0);
}
