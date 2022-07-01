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

	while (alpha <= 99)
	{
		putchar('0' + alpha / 10);
		if (alpha >= 10)
			putchar('0' + alpha % 10);
		putchar(',');
		alpha++;
		putchar(' ');
	}
	return (0);
}
