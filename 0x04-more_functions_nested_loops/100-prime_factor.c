#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0 (success)
 */

int main(void)
{
	long int i = 612852475143, j, k;

	while (i % 2 == 0)
	{
		j = 2;
		i /= 2;
	}

	for (k = 3; k * k <= i; k += 2)
	{
		while (i % k == 0)
		{
			j = k;
			i /= k;
		}
	}

	if (i > 1)
		j = i;

	printf("%ld\n", j);
	return (0);
}
