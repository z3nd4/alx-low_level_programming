#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ) {
        	printf("The number is greater than 0\n");
       	}
	if( n == 0 ) {
        	printf("The number is equal to 0\n");
	}
	if( n < 0 ) {
        	printf("The number is less than 0\n");
	}
	return (0);
}
