#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name using function pointer that takes a char pointer
 * @name: char pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	void (*f)(char *) = f;

	f(name);
}
