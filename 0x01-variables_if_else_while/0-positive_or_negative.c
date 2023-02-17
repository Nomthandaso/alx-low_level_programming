#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * It returns the same sequence of random number
    on every execution of the program.
 *
 */
int main(void) {

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
   if(n>0) {
      printf("%d is positive",n);
   } else if(n<0) {
      printf("%d is negative",n);
   } else {
      printf("%d is zero",n);
   }
   return 0;
}
