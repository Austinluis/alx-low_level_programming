#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array containing chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int len, i, j;

	for (i = 0; i < 8; i++)
	{
		len = sizeof(a[i]) / sizeof(a[i][0]);

		for (j = 0; j < len; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
