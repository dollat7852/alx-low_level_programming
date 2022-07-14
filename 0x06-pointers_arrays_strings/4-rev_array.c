#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse the content of an array
 *
 * @a: arg 1
 * @n: arg 2
 *
 * Return: an integer array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int array[n];

	for (i = n - 1; i >= 0; i--)
	{
		array[j] = a[i];
		j++;
	}

	*a = *array;
}
