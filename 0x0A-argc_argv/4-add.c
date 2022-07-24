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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) && (*argv[i] < '0' || *argv[i] > '9'))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
