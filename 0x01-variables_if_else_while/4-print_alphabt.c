#include <stdio.h>

/**
 * main - prints all the letters of the alphabets except q and e
 * Return: 0
 */

int main(void)
{
	char v = 'a';

	do {
		if ((v != 'e' && v != 'q') && v <= 'z')
		putchar(v);
		v++;
	} while (v <= 'z');

	putchar('\n');
	return (0);
}
