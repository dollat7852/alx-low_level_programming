#include "main.h"

/**
 * print_triangle - wtite out a triangle figure
 * @size: arg 1
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = i + 1;

		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}
}
