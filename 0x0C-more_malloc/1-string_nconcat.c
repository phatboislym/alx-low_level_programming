#include "mainn.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements to be taken from s2
 * Return: pointer to s1 or NULL
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	mem = malloc(sizeof(char) * (i + n + 1));
	if (mem == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		mem[i] = s2[j];
		i++, j++;
	}
	mem[i] = '\0';
	return (mem);
}
