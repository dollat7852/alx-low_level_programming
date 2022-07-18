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
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		*(s + 1) = b;
	}
	return (s);
}
