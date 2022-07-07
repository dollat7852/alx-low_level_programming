#include "main.h"

/**
 * print_numbers - write digit 0 to 9 to screen
 */

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
