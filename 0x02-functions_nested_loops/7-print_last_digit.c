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
	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}

