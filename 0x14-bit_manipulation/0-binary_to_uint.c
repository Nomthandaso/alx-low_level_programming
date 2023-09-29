#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: conv_num, or 0 if b is NULL or not equals to 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[i] - '0');
	}
	return (conv_num);
}
