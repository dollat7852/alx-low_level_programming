#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{
	int alpha = 0;
	char ALPHA = 'a';

	while (alpha <= 9)
	{
		putchar(alpha + "0");
		alpha++;
	}
	while (ALPHA <= 'f')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
