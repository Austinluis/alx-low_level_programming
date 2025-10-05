#include "main.h"

/**
 * reverse_array - function to reverse an array of integers.
 * @a: pointer to array.
 * @n: number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int back, front, temp;

	back = n - 1;
	front = 0;

	while (back > front)
	{
		temp = a[back];
		a[back] = a[front];
		a[front] = temp;
		back--;
		front++;
	}
}
