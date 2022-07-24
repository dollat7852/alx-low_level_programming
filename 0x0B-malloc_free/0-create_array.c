#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that create an array
 * @size: size of array
 * @c: array content
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
