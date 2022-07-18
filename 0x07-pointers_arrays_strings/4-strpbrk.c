#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - emmulate strpbrk of the string.h
 * @s: string to be checked
 * @accept: var to be checked
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
