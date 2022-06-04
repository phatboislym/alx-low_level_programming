#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
* main - Entry point
*
* program prints all numbers of base16 in lowercase.
* You can only use putchar, 3 times, max.
*
* Return: 0
*/

int main(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
