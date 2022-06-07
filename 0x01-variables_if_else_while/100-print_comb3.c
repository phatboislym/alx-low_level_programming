#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - Entry point
* program prints all possible combinations of two digits in ascending order
* numbers must be separated by , followed by a space
* the two digits must be different
* program should only use the putchar functions (<= five times)
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
int y;

for (x = 0; y <= 9; y++)
{
for (x = y + 1; x <= 9; x++)
{
putchar(y + '0');
putchar(x + '0');

if (y < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
