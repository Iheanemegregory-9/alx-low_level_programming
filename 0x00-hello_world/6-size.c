#include <stdio.h>

/**
 * main -  Print size of types
 *
 * Description: 'A program that prints the sizes of data types'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %zu(s)\n", sizeof(char));

    printf("Size of int: %zu(s)\n", sizeof(int));

    printf("Size of long long int: %zu(s)\n", sizeof(long long int));

    printf("Size of long int: %zu(s)\n", sizeof(long int));

    printf("Size of float: %zu(s)\n", sizeof(float));
    return (0);
}
