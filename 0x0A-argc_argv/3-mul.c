#include <stdio.h>

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

	if  (argc > 1)
	{
		for (i = 0; i < argc; i++)
			mul *= argv[i];
	printf("%d\n", mul);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
}
