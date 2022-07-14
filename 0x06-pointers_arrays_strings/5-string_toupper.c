#include "main.h"
#include <string.h>

/**
 * string_toupper compare two strings together
 *
 * @dest: arg 1
 *
 * Return: a pointer to the joined string
 */

char *string_toupper(char *dest)
{
	int n = strlen(dest) - 1;
	int i;

	for (i = 0; i <= n; i++)
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
			dest[i]-=32;
	}
}
