#include "main.h"

/**
 * print_alphabet_x10 - a function that prints english alphabets in lower case
 * ------------------
 *  Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 10)
		{
		while (alpha <= 'z')
			{
				_putchar (alpha);
				alpha++;
			}
		_putchar('\n');
		i++;
		alpha = 'a';
		}
}

