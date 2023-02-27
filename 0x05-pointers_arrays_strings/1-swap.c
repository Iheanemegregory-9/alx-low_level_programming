#include "main.h"

/**
 * swap_ing- swaps two integers
 * @i : pointer for the first value
 * @u : pointer for the sencond value
 */

void swap_int(int *i, int *u)
{
	int x;

	x = *i;
	*i = *u;
	*u = x;
}
