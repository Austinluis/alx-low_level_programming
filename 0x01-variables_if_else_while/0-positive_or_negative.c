#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigns a random number to variable n
 * and checks if it is positive or negative
 *
 * Return: 0(sucess)
 */
int main(void)
{
	int n;/* variable n */

	/* assigns random number to variable n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if/else statment to determine if n is positive or negative */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
