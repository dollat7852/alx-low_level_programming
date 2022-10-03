#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - emmulate strstr of the string.h
 * @s: string to be checked
 * @accept: var to be checked
 * Return: pointer
 */

char *_strstr(char *s, char *accept)
{
	return (strstr(s, accept));
}
