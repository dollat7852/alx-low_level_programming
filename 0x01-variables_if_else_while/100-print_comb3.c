#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{
	int i, j = 0;
	int count = 0;
	
	for(i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
