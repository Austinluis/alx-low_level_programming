#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0(success)
 */

int main(void)
{
	int num, alpha;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
