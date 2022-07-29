#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Return 0
*/

void times_table(void)
{
int row = 0;
int column = 0;
int product = 0;

for (row = 0; row < 10; row++)
{
	putchar(48);
	putchar(44);
	for (column = 1; column < 10; column++)
	{
		product = row * column;
		if ((product / 10) > 0)
		{
			putchar((product / 10) + '0')
		}
		else
		{
			putchar(32);
		}
		putchar((product % 10) + '0');
		if (column < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}
return (0);
}
