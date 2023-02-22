#include <stdio.h>
/**
 * void print_alphabet - Entry point
 *
 * Description: printing the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
