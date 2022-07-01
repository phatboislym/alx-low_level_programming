#include "main.h"
#include <stdlib.h>

/**
 * array_range creates an array of integers
 * @min: index minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *mem;
	int i = 0;

	if (min > max)
		return (NULL);
	mem = malloc(sizeof(int) * (max - min + 1));
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (; min <= max; min++, i++)
		*(mem + i) = min;
	return (mem);
}
