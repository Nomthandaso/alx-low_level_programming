#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
		putchar ('0' + n);
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
