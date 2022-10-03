#include "main.h"
#include <string.h>

/**
 * _strncat - join n char from src to dest strings
 *
 * @dest: arg 1
 * @src: arg 2
 * @n: number of char to concatenate
 *
 * Return: a pointer to the joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
