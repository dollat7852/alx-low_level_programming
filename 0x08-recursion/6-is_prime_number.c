#include <stdio.h>
#include "main.h"


int _is_prime(int n, int  y);

/**
 * is_prime_number - function
 * @n: var 1
 * Return: int
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - function
 * @n:  var 1
 * @y: var 2
 * Return: int
 */

int _is_prime(int n, int  y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	return (_is_prime(n, y + 1));
}

