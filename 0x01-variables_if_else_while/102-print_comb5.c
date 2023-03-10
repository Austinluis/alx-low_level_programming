#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 99; i++)
	{
		for (k = i + 1;  k <= 99; k++)
		{
			if (i != k)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');
			}
			if (i == 98 && k == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
