#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string between two variable/ address
 * @dest: arg 1
 * @src: arg 2
 *
 * Return: Pointer to the destination address
 *
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
