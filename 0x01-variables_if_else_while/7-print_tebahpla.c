#include <stdio.h>
/**
 * main - Entry point
 *
 * Desription: print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
