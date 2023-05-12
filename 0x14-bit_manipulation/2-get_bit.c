#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n:...
 * @index:...
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);
	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
