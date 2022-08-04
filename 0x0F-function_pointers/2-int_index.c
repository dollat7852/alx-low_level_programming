#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index returned by cmp
 * @cmp: function pointer
 * @size: size of an array
 * @array: array of int
 * Return: int -1 if size <=0 index otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
