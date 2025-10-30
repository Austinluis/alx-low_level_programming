#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	/* Avoid unused warnings for argc */
	(void)argc;

	printf("%s\n", *argv);
	exit (EXIT_SUCCESS);
}
