#include <stdio.h>

/**
 * main - prints the alphabets in lowercase in reverse
 * Return: 0(success)
 */

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
