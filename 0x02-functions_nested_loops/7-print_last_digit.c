#include "main.h"

/**
 * print_last_digit - prints the last number
 *
 * @n : n is the integer
 *
 * Description: Prints last digit of a number
 *
 * Returen: n
 */

int print_last_digit(int n)
{
	int lastNumber = n % 10;

	if (n < 0)
		lastNumber = lastNumber * -1;

	_putchar(lastNumber + '0');
	return (n);
}
