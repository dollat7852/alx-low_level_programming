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

	while (alpha <= 9)
	{
		putchar('0' + alpha);
		putchar(',');
		alpha++;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
