#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{

int ch;

for (ch = 48; ch <= 57; ch++)

{

	putchar(ch);

	if (ch != 57)

	{

		putchar(44);

		putchar(32);
	}

}



putchar(10); /* this is an ascii code for new line*/



return (0);

}

