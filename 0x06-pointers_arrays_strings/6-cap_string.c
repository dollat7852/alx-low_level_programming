#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize the first letter of every word
 * @s: arg 1
 * Return: 0
 *
 */

cap_string(char *s)
{
	int len = strlen(s) - 1;
	int i, j;
	char delim[] = {' ', ',', '.', ';', '!', '?', '(', ')', '{', '}', '"'};

	for (i = 1; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == delim[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				else if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
					s[i + 2] = s[i + 2] - 32;
				else
					continue;
			}
		}
	}
	return (0);
}



