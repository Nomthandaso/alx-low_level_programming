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
    int integerType;

    float floatType;

    double doubleType;

    char charType;

    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));

    return (0);
}
