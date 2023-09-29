#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n:...
 */
void print_binary(unsigned long int n)
{
	int i, k = 0;
	unsigned long int anaconda;

	for (i = 63; i >= 0; i--)
	{
		anaconda = n >> i;
		if (anaconda & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
