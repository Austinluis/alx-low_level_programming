#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int fir, sec, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	fir = _atoi(*(argv + 1));
	sec = _atoi(*(argv + 2));
	res = fir * sec;

	printf("%d\n", res);
	return (0);
}
