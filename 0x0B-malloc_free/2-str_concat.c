#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: var 1
 * @s2: var 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0;
	int i = 0;
	char *cat;
	int size = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	size += i + j;

	cat = malloc(size * sizeof(char) + 1);

	if (cat == 0)
		return (NULL);
	strcat(cat, s1);
	strcat(cat, s2);
	return (cat);
}
