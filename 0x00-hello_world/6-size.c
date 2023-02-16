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
    printf("Size of char: %lu(s)", sizeof(char));
    printf("Size of int: %lu(s)", sizeof(int));
    printf("Size of long long int: %lu(s)", sizeof(long long int));
    printf("Size of long int: %lu(s)", sizeof(long int));
    printf("Size of float: %lu(s)", sizeof(float));
    return (0);
}
