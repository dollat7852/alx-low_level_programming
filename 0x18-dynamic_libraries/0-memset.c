#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - set a constant to mem location
 * @s: pointer to memory location
 * @b: char to be set
 * @n: number of 'b' to be written to memory s
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
