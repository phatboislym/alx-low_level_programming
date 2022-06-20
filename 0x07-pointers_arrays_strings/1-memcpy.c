#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: char array input paramter
 * @dest: char array to copy into
 * @n: number of array members to copy
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
