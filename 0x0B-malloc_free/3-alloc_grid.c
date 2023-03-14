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
