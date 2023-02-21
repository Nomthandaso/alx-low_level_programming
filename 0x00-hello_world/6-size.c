#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("size of char is = %i byte\n", sizeof(char));
    printf("size of int is = %i byte\n", sizeof(int));
    printf("size of long int is = %i byte\n", sizeof(long int));
    printf("size of long long int is = %i byte\n", sizeof(long long int));
    printf("size of float is = %i byte\n", sizeof(float));

    return (0);
}
