#include "main.h"
/**
 * jack_bauer - return absolute value of an argument
 * - an argurment to be checked
 */

void jack_bauer(void)
{ int j = 0;
	int y = 0;
	int z = 0;

	for (j = 0; j < 24; j++)
	{
		while (y < 6)
		{
			while (z <= 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar(':');
				_putchar('0' + y);
				_putchar('0' + z);
				_putchar('\n');
				z++;
			}
			y++;
			z = 0;
		}
		y = 0;
	}
}

