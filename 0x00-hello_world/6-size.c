#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0
 */

int main(void)
{
	int i;
	char c;
	long int n;
	long long int j;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
