#include "main.h"

/**
 * print_alphabet_x10 - prints the letters of the aplphabets on 10 lines
 * in lowercase followed by a newline
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
