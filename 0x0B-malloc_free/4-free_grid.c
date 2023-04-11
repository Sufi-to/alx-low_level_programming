#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: 2 dimentinal array to be freed
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;

	if (grid == NULL || height <= 0)
		return;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
}
