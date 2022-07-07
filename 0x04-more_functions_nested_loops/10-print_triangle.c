#include "main.h"

/**
 * print_triangle - wtite out a triangle figure
 * @size: arg 1
 */

void print_trianglee(int size)
{
	for (int i = 0, i < size; i++)
	{
		int j = i + 1;

		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}
}
