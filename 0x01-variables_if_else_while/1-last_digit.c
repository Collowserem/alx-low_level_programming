#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints a variable when executed
*/
int main(void)
{
	int n;
	srand(time(0));
	/* your code goes goes there*/
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else 
		printf("Last digit %d is %d and is less than 6 and 0\n", n,  n % 10);
	return (0);
}
