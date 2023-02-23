#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: computes the absolute value of an integer
 *
 * @c: nimber to be computed
 *
 * Return: Absolute value of number or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
