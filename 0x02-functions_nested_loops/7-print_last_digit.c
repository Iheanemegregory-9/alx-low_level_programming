#include "main.h"

/**
 * print_last_digit - prints the last number
 *
 * @n : n is the integer
 *
 * Descriptions: Prints last digit of a number
 *
 * Returen: n
 */

int print_last_digit(int n)
{
	int lastNumber = n % 10;

	_putchar('0' + lastNumber);
	return (n);
}
