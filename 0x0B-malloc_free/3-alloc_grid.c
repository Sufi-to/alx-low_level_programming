#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2 dimensional array of int, NULL on failure or if
 * height or width is zero
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j <= 1; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
