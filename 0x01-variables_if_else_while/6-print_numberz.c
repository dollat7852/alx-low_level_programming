#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 *main - a function that print number 0 - 9.
 * ------
 *  Return: zero
 */
int main(void)

{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	putchar('\n');
	return (0);
}
