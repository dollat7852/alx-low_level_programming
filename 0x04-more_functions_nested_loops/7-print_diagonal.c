#include "main.h"

/**
 * print_diagonal - write \\\\\\
 * @n: the number of times \ should be written to the screen
 */
void print_diagonal(int n)
{
	for (int i = 0, i < n; i++)
	{
		_putchar('\\');
	}
		_putchar('\n');
}
