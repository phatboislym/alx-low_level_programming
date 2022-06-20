#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char array input string
 * @c: char to locate in char array
 * Return: pointer to first occurrence of @c or NULL if not not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
