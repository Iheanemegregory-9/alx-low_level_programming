#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: 'A program that prints the sizes of data types'
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
    printf("Size of char: %zu(s)", sizeof(char));
    printf("Size of int: %zu(s)", sizeof(int));
    printf("Size of long long int: %zu(s)", sizeof(long long int));
    printf("Size of long int: %zu(s)", sizeof(long int));
    printf("Size of float: %zu(s)", sizeof(float));
    return (0);
}
