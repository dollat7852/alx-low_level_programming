#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - function
 * @height: var 1
 * @width: var 2
 * Return: int 
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int grid_size;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	else 
	{
		grid_size = width * height;
		output = malloc(grid_size * sizeof(int));

		if (output == 0)
			return (NULL);
		else
		{
			for (i = 0; i < width; i++)
			{
				for (j = 0; j < height; j++)
				{
					output[i][j] = 0;
				}
			}
		}
		
	return (output);
	}
}	
