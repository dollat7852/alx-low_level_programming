#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if  (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
