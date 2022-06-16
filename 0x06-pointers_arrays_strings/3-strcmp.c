#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: - string input 1
 * @s2: - string input 2
 * Return: the difference between s1 and s2
 * negative int if s1 < s2, 0 if s1 == s2, positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0
		;
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
