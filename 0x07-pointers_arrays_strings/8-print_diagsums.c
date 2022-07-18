#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - print an size by size matrix
 * @a: number of rows
 * @size: sie of a square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size * sie; i = i + size + 1)
	{
		sum += a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + size - 1)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
