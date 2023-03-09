#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: the string to print
 */

void _print_rev_reursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}