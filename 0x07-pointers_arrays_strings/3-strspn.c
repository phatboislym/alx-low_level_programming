#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string input to be checked
*@accept: string to compare to s
*Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
