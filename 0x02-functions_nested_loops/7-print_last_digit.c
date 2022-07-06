#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * print_last_digit - return last digit of an argument
 * @n: - an argurment to be checked
 *  Return: 1 , 0,-1 respectively
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;
	_putchar((r) + '0');
	return (r);
}

