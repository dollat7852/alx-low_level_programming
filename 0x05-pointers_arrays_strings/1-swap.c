#include "main.h"

/**
 * swap_int - main function
 * @a: arg 1
 * @b: arg 2
 *
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
