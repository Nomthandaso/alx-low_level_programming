#include "main.h"
/**
 * _isdigit - Entry point
 *
 * Description: checks for a digit (0 through 9)
 *
 * @c: number to be checks
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
