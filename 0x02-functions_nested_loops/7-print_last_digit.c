#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of a number
 *
 * @n: number to be treated
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	else if (last > 0)
	{
		last = last * 1;
	}
	_putchar (last + '0');
	return (last);
}
