#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - stores a digit in varable n every time code is executed 
 * and prints if n is negative or positive
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if(n = 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			if(n < 0)
			{
				printf("%d is negative\n", n);
			}
			else
			{
				printf("failed\n");
			}
		}
	}

	return (0);
}
