#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - immitate the strdup of string.h library
 * @str: String to duplicate
 * Return: pointer to duplicated string in memory
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *strdp;

	if (str == NULL)
		return (NULL);
	/* get the lenght of str to allocate adequate memeory */
	while (str[i] != '\0')
		i++;
	size += i;

	strdp = malloc(size * sizeof(char) + 1);

	if (strdp == 0 )
		return (NULL);
	strcpy(strdp, str);
	return (strdp);
}
