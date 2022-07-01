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
					printf("%f is positive\n", n);
				if (n < 0)
					printf("%f is negative\n", n);
				if (n == 0)
					printf("%f is zero\n", n);
				return (0);

}
