#include <stdlib.h>


#include <stdio.h>

/**
 *main - a function that print hexadecimal numbers.
 * ------
 *  Return: zero
 */
int main(void)

{
	int i, j, z = 0;
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (z = 0; z <= 9; z++)
			{
			if (i < j && j < z)
			{
				count++;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + z);
				if (count < 120)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
