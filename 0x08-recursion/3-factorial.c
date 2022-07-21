#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - compute factorial of a number
 * @n: interger value
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
