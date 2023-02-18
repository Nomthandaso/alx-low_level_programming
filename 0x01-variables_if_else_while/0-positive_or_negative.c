#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * It returns the same sequence of random number  
    on every execution of the program.
    */
int main(void)
{
	int n=98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf( "%d is positive\n" );
	}
	if (n == 0)
	{
		printf( "%d is zero\n" );
	}
	if (n < 0)
	{
		printf( "%d is negative\n" );
	}
	return (0);
}
