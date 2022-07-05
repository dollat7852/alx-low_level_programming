#include "main.h"
/**
 * print_alphabet - a function that prints english alphabets in lower case
 * ------------------
 *  Return: void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

