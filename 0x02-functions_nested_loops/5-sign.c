#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: prints sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 if (n > 0) or -1 if (n < 0) otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
