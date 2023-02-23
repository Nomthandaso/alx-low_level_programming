#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: printing the lowercase alphabet using putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar (c);
	}
		_putchar ('\n');
		return;
}
