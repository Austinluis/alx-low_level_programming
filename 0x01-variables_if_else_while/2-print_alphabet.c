#include <stdio.h>

/* main - prints the letters of the alphabets on a line */

int main(void)
{
	char al = 'a';

	do
	{
		putchar(al++);
	}

	while (al <= 'z');

	putchar('\n');

	return (0);
}

