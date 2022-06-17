#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string input parameter
 * Return: string
*/

char *leet(char *str)
{
	int letter[5] = {97, 101, 111, 116, 108};
	int number[5] = {52, 51, 48, 55, 49};
	int x, y, pos;

	for (x = 0; *(str + x); x++)
	{
		pos = *(str + x);
		for (y = 0; y < 5; y++)
		{
			if (pos == letter[y] || pos == (letter[y] - 32))
			{
				*(str + x) = number[y];
				break;
			}
		}
	}
	return (str);
}
