#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ASCII_MIN 33
#define ASCII_MAX 127

int checksum(int *arr, int len);

/**
 * main - creates a passwd of random ascii values
 * that add up to a particular sum
 * Return: 0 (success)
 */

int main(void)
{
	int seed, rem, target, current, len, sum, arr[100];
	int randm, excess, recess, div;

	seed = time(0);
	srand(seed);
	target = 2772;
	current = 0;
	rem = target - current;
	len = 0;

	/* generates random ascii value and stores it in array */
	while (rem > 0)
	{
		randm = rand() % (ASCII_MAX - ASCII_MIN + 1) + ASCII_MIN;
		arr[len] = randm;
		len++;
		current += randm;
		rem = target - current;
	}

	int passwd[len];

	/* stores only the random developed ascii from arr in passwd */
	for (int i = 0; i < len; i++)
		passwd[i] = arr[i];

	sum = checksum(passwd, len);

	/* makes sure the sum is equal to the target sum */
	while (sum != target)
	{
		if (sum > target)
		{
			excess = sum - target;

			for (int j = 0; j < len; j++)
			{
				if (passwd[j] - excess >= 33)
				{
					passwd[j] -= excess;
					break;
				}
				else if (j == len - 1)
				{
					div = excess / len;
					for (int i = 0; i < len; i++)
					{
						if (passwd[i] - div >= 33)
							passwd[i] -= div;
					}
				}
			}
		}
		else if (sum < target)
		{
			recess = target - sum;

			for (int j = 0; j < len; j++)
			{
				if (passwd[j] + recess <= 127)
				{
					passwd[j] += recess;
					break;
				}
				else if (j == len - 1)
				{
					div = recess / len;
					for (int i = 0; i < len; i++)
					{
						if (passwd[i] + div <= 127)
							passwd[i] += div;
					}
				}
			}
		}
		sum = checksum(passwd, len);
	}

	for (int i = 0; i < len; i++)
		printf("%c", passwd[i]);

	return (0);
}

/**
 * checksum - calculates the total sum of the elements in arr
 * @arr: pointer to array to return sum of elements
 * @len: lenght of arr
 * Return: total sum
 */

int checksum(int *arr, int len)
{
	int sum = 0;

	for (int i = 0; i < len; i++)
		sum += arr[i];

	return (sum);
}
