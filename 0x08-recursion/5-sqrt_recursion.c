#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _sqrt_recursion - compute x to the power of y
 * @x: var 1
 * Return: int
 */

int _sqrt_recursion(int x)
{
	return (power(x, 1));
}

/**
 * power - find the power
 * @x: var 1
 * @y: var 2
 * Return: int
 */

int power(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (power(x, y + 1));
	else
		return (-1);
}
