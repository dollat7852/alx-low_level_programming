#include "main.h"
#include <string.h>

/**
 * rev_string- reveerse the string
 * @str: arg 1
 *
 */

void rev_string(char *str)
{
	int i = strlen(str);
	int j = 0;
	char swap;

	while ((i - 1) > j)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i--;
		j++;
	}
}
