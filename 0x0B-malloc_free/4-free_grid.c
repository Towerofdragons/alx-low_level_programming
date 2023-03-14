#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid after main execution
 * @grid: the grid
 * @height: number of rows in the grid
 *
 * Return: nothing
 */


void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}

	free(grid);
}
