#include <stdio.h>
#include "main.h"

/**
 * print_buffer - function that prints a buffer
 * @b: pointer to buffer
 * @size: size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, start, end, limit;

	start = 0;
	end = ((size % 10) > 0) ? size / 10 : (size / 10) - 1;

	if (size <= 0)
		printf("\n");

	for (i = 0; i <= end; i++)
	{
		limit = ((i + 1) * 10 <= size) ? (i + 1) * 10 : size;

		printf("%08x: ", start);

		for (j = i * 10; j < (i + 1) * 10; j++)
		{
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = i * 10; j < limit; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}

		printf("\n");
		start += 10;
	}
}
