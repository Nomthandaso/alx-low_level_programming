#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0 ; a <=2 ; a++)
	{
		_putchar (a + '0');
	}
	for (b = 0 ; b <= 9 ; b++)
	{
		_putchar (b + '0');
	}
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
		_putchar (58);
	}
	for (c = 0 ; c <= 5 ; c++)
	{
		_putchar (c + '0');
	}
	for (d = 0 ; d <= 9 ; d++)
	{
		_putchar (d +'0');
	}
	_putchar ('\n');
	return;
}