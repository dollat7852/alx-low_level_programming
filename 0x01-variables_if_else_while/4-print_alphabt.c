#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 *main - a function that print english alphabets in lower case e and q.
 * ------
 *  Return: zero
 */
int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
