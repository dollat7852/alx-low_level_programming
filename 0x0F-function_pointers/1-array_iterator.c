#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that takes an array of functions 
 * and execute the function at array[size] on array
 * @array: int pointer
 * @size: selector
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (size < 1 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
