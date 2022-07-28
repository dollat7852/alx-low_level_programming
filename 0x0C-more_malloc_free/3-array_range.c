#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array if successful
 */

int *array_range(int min, int max)
{
	int range, i = 0,  *ptr;

	range  = max - min;
	ptr = malloc((range + 1) * sizeof(*ptr));
	if (min > max || ptr == NULL)
		return (NULL);
	for (range = min; range <= max; range++)
		ptr[i++] = range;
	return (ptr);
}
