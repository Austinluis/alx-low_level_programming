#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments passed into it
 * @argc: argument count
 * @argv: array of pointers to passed arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
