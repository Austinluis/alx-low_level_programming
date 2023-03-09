#include <stdio.h>

/**
 * main - prints all he numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	do {
		putchar(i + '0');
		i++;
	} while (i <= 9);

	do {
		putchar(c);
		c++;
	} while (c <= 'f');

	putchar('\n');

	return (0);
}
