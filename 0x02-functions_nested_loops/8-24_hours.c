#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * jack_bauer - return absolute value of an argument
 * - an argurment to be checked
 */

void jack_bauer(void)
{ int i, j, y, z;

	while ( i < 3)
	{
		while (j <= 3)
		{
			while (y < 6)
			{
				while (z <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + y);
					_putchar('0' + z);
				}
			}
		}
	}
}

