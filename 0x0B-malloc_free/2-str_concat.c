#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _str_concat - concatenate two strings
 * @s1: var 1
 * @s2: var 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *catstr;
	int size = 1;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	size += i + j;

	catstr = malloc(size * sizeof(char) + 1);

	if (catstr == 0 || catstr == NULL)
		return (NULL);
	else
	{
		strcat(catstr, s1);
		strcat(catstr, s2);
		return (catstr);
	}
}
