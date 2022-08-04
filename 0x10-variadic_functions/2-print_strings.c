#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - a vaiadic function that prints a list of arg
 * @n: required int - number of optional args
 * @separator: pointer to char to separate list
 * Return: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *sTr = NULL;

	va_start(ap, n);
		for (i = 0; i < n ; i++)
		{
			sTr = va_arg(ap, char *);
			if (sTr == NULL)
				printf("(nil)");
			else
				printf("%s", sTr);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	printf("\n");
	va_end(ap);
}
