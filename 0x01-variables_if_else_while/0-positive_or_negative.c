#include <stdlib.h>

#include <time.h>
#include <stdio.h>



/**
 *main - a function to check whether a number is positive
 *---------------------
 *Return: zero
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n > 0)
					printf("%d is positive", n);
				if (n < 0)
					printf("%d is negative", n);
				if (n == 0)
					printf("%d is zero", n);
				return (0);

}
