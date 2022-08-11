#include <stdio.h>

void start_func(void) __attribute__ ((constructor));

/**
 * start_func - function runs before main function
 */

void start_func(void)
{
	printf("You're beat! and yet, you must allow,\nI");
	printf(" bore my house upon my back!\n");
}
