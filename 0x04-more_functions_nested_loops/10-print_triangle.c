#include "main.h"

/**
 * print_triangle - wtite out a triangle figure
 * @size: arg 1
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{

		for (j = size - 1; j >= 0; j--)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
