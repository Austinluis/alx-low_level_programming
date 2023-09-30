#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * Return: 0(success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
