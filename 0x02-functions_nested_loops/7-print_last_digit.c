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
		lastNumber = -123567890;

	_putchar('0' + lastNumber);
	return (n);
}
