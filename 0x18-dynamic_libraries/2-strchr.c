#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - return first occurence of c in s
 * @s: string pointer
 * @c: character to be searched
 * Return: char
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

