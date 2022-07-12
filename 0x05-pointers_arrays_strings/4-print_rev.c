#include "main.h"
#include <string.h>

/**
 * print_rev - reversed print
 * @str: arg 1
 *
 */

void print_rev(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
