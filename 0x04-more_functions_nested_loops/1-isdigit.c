#include "main.h"

/**
 * _isdigit - the fuctionchecks if a char is a digit
 * @c: argument 1
 * Return : 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return(1);
	else
		return (0);
}
