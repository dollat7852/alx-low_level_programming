#include "main.h"

/**
 * print_line - write _____
 * @n: the number of times _ should be written to the screen
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
