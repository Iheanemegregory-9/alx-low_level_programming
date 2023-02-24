#include "main.h"

/**
 * _isdigit - check for numbers from 0 through 9
 *
 * @c: the int to that will be checked
 *
 * Result: 1 ic c == digit and 0 is c != digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
