#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints out the last number of n
 * Its executes and prints it if cinditions are met
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digits of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
