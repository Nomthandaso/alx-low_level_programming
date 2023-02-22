#include <main.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar (ch);
	{
		putchar ('\n');
	}
	return (0);
}
