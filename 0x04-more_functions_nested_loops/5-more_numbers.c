#include "main.h"

/**
 * more_numbers - write digit 0 to 9 to screen
 */

void more_numbers(void)
{
	for (int i = 0, i <= 9; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}