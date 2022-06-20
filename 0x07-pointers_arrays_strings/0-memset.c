#include "main.h"

/**
*_memset - fills memory with constant byte
 * @s: pointer input parameter
 * @b: character to fill the memory area with
 * @n: number of bytes to be filled
 * Return: A pointer to address @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	unsigned int y;

	while (*(s + x) != '\0')
	{
		x++;
	}

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
return (s);
}
