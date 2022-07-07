#include "main.h"

void printer(int n);

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
			printer(j);
		}
	}
}

/**
 * printer - aaa
 * @n: to be printed
 */
void printer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		printer(n / 10);
		_putchar((n % 10) + '0');
	}
}
