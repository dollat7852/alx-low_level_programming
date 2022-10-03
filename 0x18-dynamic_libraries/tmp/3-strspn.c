#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - function to check span in a string
 * @s : string to be checked
 * @accept: the span
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
