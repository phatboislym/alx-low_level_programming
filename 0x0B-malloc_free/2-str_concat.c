#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to a new NULL ending string containing s1 followed 
* by s2 or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		str[k] = s1[k];
	for (k = 0; k <= j; k++)
		str[k + i] = s2[k];
	str[k + i] = '\0';
	return (str);
}
