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
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 1; i <= len; i++)
	{
		if (s[i] == ',' || s[i] == '.' || s[i] == ' ' || s[i] == ';' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '!' || s[i] == '?')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
			else if (s[i + 2] >= 'a' && s[i +2] <= 'z')
				s[i + 2] = s[i + 2] - 32;
		}
	}
	return (0);
}
