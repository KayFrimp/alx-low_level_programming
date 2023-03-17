#include <stdlib.h>

/**
 * free_grid - Frees 2D Array created by alloc_grid fxn.
 * @grid: Pointer to a 2D Array
 * @height: Height of 2D Array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

