#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9
 *
 * Return: The numbers since 0 upto 9
 */
void print_most_numbers(void)
{
	int _putchar(int i);

	int x = 0;
	
	for ( ; x <= 9 ; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar (x + '0');
		}
	}
	_putchar ('\n');
}