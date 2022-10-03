#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copy n byte across 2 memory locations.
 * @src: source address
 * @dest: destination address
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
