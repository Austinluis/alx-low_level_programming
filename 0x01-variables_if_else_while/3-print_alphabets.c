#include <stdio.h>

/**
 * main - prints the letters of the alphabets in lowercase
 * and uppercase on a line
 * Return: 0
 */

int main(void)
{
	char al = 'a', la = 'A';

	do {
		putchar(al++);
	} while (al <= 'z');

	do {
		putchar(la++);
	} while (la <= 'Z');

	putchar('\n');

	return (0);
}
