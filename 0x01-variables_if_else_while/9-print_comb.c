#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers
 * numbers must be separated by , followed by a space
 * numbers should be printed in ascending order
 * program should only use the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');

return (0);
}
