#include <stdio.h>

/**
 * main - write \\\\\\
 */

void main(void)
{
	for (int i = 1, i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
}
