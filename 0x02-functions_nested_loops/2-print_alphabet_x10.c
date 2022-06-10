#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10x
* in lowercase, followed by a new line
*
* Return: 0 success
*/

void print_alphabet_x10(void)

{
int j;
int i;

for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}

