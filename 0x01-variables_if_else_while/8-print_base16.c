#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing base 16  in lowercase usin putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0 ; n <= 9 ; n++)
		putchar (n);
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
