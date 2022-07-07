#include "main.h"

/**
 * print_square - wtite out a square figure
 * @size: arg 1
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
