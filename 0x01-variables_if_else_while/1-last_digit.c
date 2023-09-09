#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n,
 * prints the last digit of that number
 * and checks if that number is greater than 5, less than 6 but not 0 or is 0
 *
 * Return: 0(success)
 */

int main(void)
{
	/**
	 * variable n - stores random number
	 * variable i - initiated
	 */
	int n, i;

	/* assigns a random number to variable n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* stores the last digit of the random number */
	i = n % 10;

	if (i > 5)
	{
		/* checks if the last digit is greater than 5 */
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if ((i < 6) && (i != 0))
	{
		/* checks if last digit is less than 6 and not 0 */
		printf("Last digit of %d is %d ", n, i);
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		/* checks if last digit is 0 */
		printf("Last digit of %d is %d and is 0\n", n, i);
	}

	return (0);
}
