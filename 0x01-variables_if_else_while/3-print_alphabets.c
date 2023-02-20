#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the lower and upper case alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar (ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
