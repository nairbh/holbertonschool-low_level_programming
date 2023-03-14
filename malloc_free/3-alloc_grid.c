#include <string.h>
#include <stdlib.h>
#include "main.h"


int **alloc_grid(int width, int height)

{
	int i;
	int **grid;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == 0)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));

		if (grid[i] == 0)
	{

		while (--i >= 0)
		{
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}
	return (grid);
}
}
