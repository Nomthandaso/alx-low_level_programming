#include "main.h"
/**
 * flip_bits -...
 * @n:...
 * @m:...
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, k = 0;
	unsigned long int dont;
	unsigned long int my = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		dont = my >> i;
		if (dont & 1)
			k++;
	}
	return (k);
}
