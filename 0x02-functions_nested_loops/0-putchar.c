#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - a function that prints a string using putchar
 * ---------
 *  Return: zero
 */

int main(void)
{
	char a[14] = "_putchar";
	int i = strlen(a);
	int j = 0;

	for (j = 0; j < i; j++)
	{
		_putchar(a[j]);
	}
	putchar('\n');
	return (0);
}
