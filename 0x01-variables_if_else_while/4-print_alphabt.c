#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except for 'q' and 'e'
 * Return: 0(success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
