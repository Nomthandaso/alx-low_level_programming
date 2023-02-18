#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Random number to variable n
 */
int main(void)
/**
 * srand - print random number to variable n
 *
 * Return: 0
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
