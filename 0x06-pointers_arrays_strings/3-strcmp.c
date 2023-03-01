#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string being compared
 * @s2: string s1 is being compared to
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
