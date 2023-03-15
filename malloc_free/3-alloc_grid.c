#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)

{
	int i, j;
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
		
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			
			{
				free(grid[j]);
			}
			free(grid);
    			return (NULL);
		}
	}
	return (grid);
}
