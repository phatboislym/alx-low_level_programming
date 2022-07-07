#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@array: array
 *@size: size of the array
 *@cmp: callback function
 *Return: -1 or nothing
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;
	int x;

	if ((array != NULL) && (cmp != NULL))
	{

		i = 1;
		while (i <= size)
		{
			x = cmp(array[i]);
			if (x != 0)
			{
				return (i);
			}

			i++;
		}

	}
	return (-1);

}
