#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - print array elements
 * @arr: arg 1
 * @n: arg 2
 *
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
