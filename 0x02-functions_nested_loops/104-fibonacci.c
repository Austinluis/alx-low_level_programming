#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long fir_fib = 1;
	unsigned long sec_fib = 2;
	unsigned long sum;
	int i;

	printf("%lu, %lu, ", fir_fib, sec_fib);

	for (i = 1; i <= 96; i++)
	{
		sum = fir_fib + sec_fib;
		fir_fib = sec_fib;
		sec_fib = sum;

		if (i < 96)
			printf("%lu, ", sum);
		else if (i == 96)
			printf("%lu\n", sum);
	}

	return (0);
}
