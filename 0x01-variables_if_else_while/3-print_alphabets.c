#include <stdio.h>

/**
 * main - prints the letters of the alphabets in lowercase and uppercase
 * Return: 0(success)
 */

int main(void)
{
	int lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
