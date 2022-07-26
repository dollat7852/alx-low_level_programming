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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(height * sizeof(*output));

	if (output == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		output[i] = malloc(width * sizeof(**output));
		if (output[i] == 0)
		{
			while (i--)
				free(output);
			free(output);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
