#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print string in reverse using recurssion
 * @s: string to be printed
 */

void _print_rev_recursion(char *s);
{
	while (strlen(s) >= 0)
	{
	putchar(strlen(s));
	_print_rev_recursion(strlen(s-1));
	}
}
