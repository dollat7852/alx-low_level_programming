#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * print_to_98 - return last digit of an argument
 * @n: - an argurment 1
 */

void print_to_98(int n);
{
		if (n < 98)
		{
			while (n <= 98)
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
				n++
			}
		}
		else
		{
			while (n >= 98)
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
				n--;
			}
		}


}

