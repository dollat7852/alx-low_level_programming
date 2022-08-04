#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a vaiadic function that prints a list of arg
 * @n: required int - number of optional args
 * @seperator: pointer to char to separate list
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n == 0 || separator == NULL)
		return;
	va_start(ap, n);
		for (i = 0; i < n ; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < (n - 1) && separator != NULL)
				printf("%s ", separator);
		}
	va_end(ap);
	printf("\n");
}
