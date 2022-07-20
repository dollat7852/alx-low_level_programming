#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - function
 * @s: string
 * Returns: int lenght
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
