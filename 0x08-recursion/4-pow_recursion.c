#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - compute x to the power of y
 * @x: var 1
 * @y: var 2
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
