#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	/* Avoid unused warnings for argv */
	(void)argv;

	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
