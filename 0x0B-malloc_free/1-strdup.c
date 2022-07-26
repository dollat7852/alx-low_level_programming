#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdub - immitate the strdup of string.h library
 * @str: String to duplicate
 * Return: pointer to duplicated string in memory
 */

char *_strdup(char *str)
{
	int size = 1;
	int i = 0;
	char *strdp;

	/* get the lenght of str to allocate adequate memeory */
	while (str[i] != '\0')
		i++;
	size += i;

	strdp = malloc(size * sizeof(char));

	if (strdp == 0)
		return (NULL);
	strcpy(strdp, str);
	return (strdp);
}
