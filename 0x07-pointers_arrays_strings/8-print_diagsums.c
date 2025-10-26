#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to array containing matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int diag_1, diag_2, i, j;

	diag_1 = diag_2 = 0;
	j = size - 1;

	for (i = 0; i < size * size; i += (size + 1))
	{
		diag_1 += a[i];
		diag_2 += a[j];
		j += (size - 1);
	}
	printf("%d, %d\n", diag_1, diag_2);
}
