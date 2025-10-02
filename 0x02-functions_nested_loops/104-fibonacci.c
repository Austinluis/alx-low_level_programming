#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long fir_fib = 1, fir_fib_1, fir_fib_2;
	unsigned long sec_fib = 2, sec_fib_1, sec_fib_2;
	unsigned long sum, sum_1, sum_2;
	int i;

	printf("%lu, %lu, ", fir_fib, sec_fib);

	for (i = 1; i < 91; i++)
	{
		sum = fir_fib + sec_fib;
		fir_fib = sec_fib;
		sec_fib = sum;
		printf("%lu, ", sum);
	}

	fir_fib_1 = fir_fib / 1000000000;
	fir_fib_2 = fir_fib % 1000000000;
	sec_fib_1 = sec_fib / 1000000000;
	sec_fib_2 = sec_fib % 1000000000;

	for (i = 1; i <= 6; i++)
	{
		sum_1 = fir_fib_1 + sec_fib_1;
		sum_2 = fir_fib_2 + sec_fib_2;
		fir_fib_1 = sec_fib_1;
		fir_fib_2 = sec_fib_2;
		sec_fib_1 = sum_1;
		sec_fib_2 = sum_2;

		sum_1 = sum_1 + (sum_2 / 1000000000);
		sum_2 = sum_2 % 1000000000;

		if (i < 6)
			printf("%lu%lu, ", sum_1, sum_2);
		else if (i == 6)
			printf("%lu%lu\n", sum_1, sum_2);
	}

	return (0);
}
