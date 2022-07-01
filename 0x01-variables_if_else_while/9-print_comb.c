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
	int ALPHA = 0;

	while (alpha <= 9)
	{
		putchar(alpha);
		alpha++;
	
		while (ALPHA <= 9)
		{
			putchar(ALPHA);
			ALPHA++;
		}
	}
	putchar('\n');
	return (0);
}
