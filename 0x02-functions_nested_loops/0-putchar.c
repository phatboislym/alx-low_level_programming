#include "main.h"

/**
* main - Entry point
*
* program prints _putchar followed by a new line
*
* Return: void (Success)
**/

int main(void)
{

char *c = "_putchar";

while (*c)
{
_putchar(*c);
c++;
}
_putchar('\n');
return (0);
}
