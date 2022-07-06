#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void _print(int n);

/**
 * print_to_98 - return last digit of an argument
 * @n: - an argurment 1
 */

void print_to_98(int n)
{
		if (n < 98)
		{
			while (n <= 98)
			{
				_print(n);
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
		else
		{
			while (n >= 98)
			{
				_print(n);
				_putchar(',');
				_putchar(' ');
				n--;
			}
		}


}


/**
 *
 *  * printer - to print
 *
 *   * @n: var
 *
 *    */

void _print(int n)
{

		if (n < 0)

				{

							_putchar('-');

									n = -n;

										}

			if (n / 10)

						_print(n / 10);

				_putchar(n % 10 + '0');

}
