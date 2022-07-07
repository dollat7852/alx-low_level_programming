#include "main.h"

/**
 * more_numbers - write digit 0 to 9 to screen
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
	}
}
