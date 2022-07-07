#include "main.h"

/**
 * print_diagonal - write \\\\\\
 * @n: arg 1
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
	}
		_putchar('\n');
}
