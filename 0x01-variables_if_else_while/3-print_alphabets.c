#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 * main - a function that print english alphabets in lower case and upper case.
 * ------
 *  Return: zero
 */
int main(void)

{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar('ALPHA');
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
