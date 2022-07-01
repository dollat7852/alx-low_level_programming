#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print lower and upper case alphabets 
 *------
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
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
