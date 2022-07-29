#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
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
for (i = 0; i < 32; i++)
{
sum = (x + y);
x = y;
y = sum;
runningSum += sum;
}
printf("%lu\n", runningSum);
return (0);
}
