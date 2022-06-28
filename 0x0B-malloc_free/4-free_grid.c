#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * 		alloc_grid function
 * @grid: width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		for (x = 0; x < height; x++)
			free(*(grid + x));
		free(grid);
	}
}
