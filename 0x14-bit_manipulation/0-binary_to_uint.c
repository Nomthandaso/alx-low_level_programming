#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string o 0 and 1 chars
 *
 * Return: con_num, b if NULL, or 0 if b is equals to 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con_num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		con_num = 2 * con_num + (b[i] - '0');
	}
	return (con_num);
}
