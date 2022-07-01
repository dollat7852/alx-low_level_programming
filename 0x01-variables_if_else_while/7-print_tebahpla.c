#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 * main - a function that print english alphabets in lower case.
 * ------
 *  Return: zero
 */
int main(void)

{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);

}
