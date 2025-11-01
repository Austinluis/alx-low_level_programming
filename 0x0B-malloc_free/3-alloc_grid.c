#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2-D array or NULL on failure and if width or
 * height is less than or equal to 0
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * height);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == NULL)
			{
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}

	return (ptr);
}
