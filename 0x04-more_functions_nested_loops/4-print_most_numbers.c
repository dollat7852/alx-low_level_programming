#include "main.h"

/**
 * print_most_numbers - write digit 0 to 9 to screen
 */

void print_most_numbers(void)
{
	for (int i = 0, i <= 9; i++)
	{
		if (i != 2 || i !=4)
			_putchar(i + '0');
	}
	_putchar('\n');
}