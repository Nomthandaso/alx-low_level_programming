#include "main.h"
/**
 * int _islower - Entry point
 *
 * Description: checks for lowercase characters
 *
 * Return: 1 if c is lowercase or 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
