#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @n: buffer sizw
 * @s: bytes of the memory area pointed
 * @b: the constant bytes
 *
 * Return: apointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
