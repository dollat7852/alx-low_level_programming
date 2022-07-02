#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{
	int digit1 = 0;
	int digit2 = 0;
	int count = 0;

	while (digit1 <= 9)
	{
		while(digit2 <= 9)
		{
			
			putchar('0' + digit1);
			putchar('0' + digit2);
			digit2++;
			count++;
		}

		digit1++;
	}
	if (count < 100)
	{
		putchar(',');
		putchar(' ');
	}
	else
		putchar('\n');
	return (0);

}

