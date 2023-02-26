#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: checks for lowercase characters
 *
 * @c: Character to be checked
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
