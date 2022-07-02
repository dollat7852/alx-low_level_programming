#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{
	int i, j, z, y = 0;
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (y = 0; y < 9; y++)
				{
				count++;
				putchar('0' + i);
				putchar('0' + j);
				putchar(' ');
				if (i < z && j < y)
				{
				putchar('0' + z);
				putchar('0' + y);
				if (count < 380)
				{
					putchar(',');
					putchar(' ');
				}
				}
				}
			}
			}
		}
	putchar('\n');
	return (0);
}
