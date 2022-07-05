#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * print_sign - checks whether the argurment is less. greater or equal to zero
 * @n: - an argurment to be checked
 *  Return: 1 , 0,-1 respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

