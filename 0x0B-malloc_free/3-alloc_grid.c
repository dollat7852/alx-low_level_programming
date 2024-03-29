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

	output = malloc(height * sizeof(*output));

	if (width < 1 || height < 1 || output == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(width * sizeof(**output));
		if (output[i] == 0)
		{
			while (i--)
				free(output[i]);
			free(output);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
