#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * jack_bauer - return absolute value of an argument
 * - an argurment to be checked
 */

void jack_bauer(void)
{ int j, y, z = 0;

		while (j <= 23)
		{
			while (y < 6)
			{
				while (z <= 9)
				{
					if (j < 10)
					{
						_putchar('0' + 0);
					}
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + y);
					_putchar('0' + z);
					z++;
				}
				y++;
			}
			j++;
		}
}

