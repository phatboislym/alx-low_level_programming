#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string input parameter
* @accept: string to compare @s to
* Return: Pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
return ('\0');
}
