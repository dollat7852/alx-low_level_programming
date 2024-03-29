#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a vaiadic function
 * @n: required int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
		for (i = 0; i < n ; i++)
			sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
