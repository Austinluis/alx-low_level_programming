#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0(success)
 */

int main(void)
{
	unsigned long int i = 2, a = 1, b = 2, c;

	printf("%lu, %lu", a, b);
	while (i <= 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
		i++;
	}
	printf("\n");
	return (0);
}
