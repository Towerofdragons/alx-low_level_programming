#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dim array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width == 0 || height == 0)
		return (NULL);

	i = 0;
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free_grid(grid, i);
			return (NULL);
		}
		i++;
	}

	i = 0;
	j = 0;

	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);

}

/**
 * free_grid - frees grid from failing row
 * @grid: the grid
 * @failure_index: failing row to back track from
 *
 * Return: nothing
 */

void free_grid(int **grid, int failure_index)
{
	while (failure_index > 0)
	{
		free(grid[failure_index]);
		failure_index--;
	}

	free(grid);
}
