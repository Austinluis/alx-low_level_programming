#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: o(success)
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
