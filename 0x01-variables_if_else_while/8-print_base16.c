#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* program prints all the numbers of base 16 in lowercase
* program uses only the putchar function
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
char a;
for (i = '0', i <= '9', ++i)
putchar(i);

for (a = 'a', a <= 'f', ++a)
putchar(a);

putchar('\n');

return (0);
}
