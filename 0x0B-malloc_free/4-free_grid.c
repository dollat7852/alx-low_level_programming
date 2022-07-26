#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to release memmory allocated by malloc function
 * @grid: pointer to memory to be freed
 * @row: number of row in the row by grid pointed memory
 */
void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)

		free(grid[i]);

	free(grid);

}
