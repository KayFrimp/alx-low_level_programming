#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D Array of integers
 * @width: Column length of 2D Array
 * @height:  Row length of 2D Array
 *
 * Return: Null or a pointer to a 2D Array of Integers
 */
int **alloc_grid(int width, int height)
{
	int **array_2D, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array_2D = (int **)malloc(height * sizeof(int *));
	if (array_2D == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array_2D[i] = (int *)malloc(width * sizeof(int));
		if (array_2D[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array_2D[i]);
			free(array_2D);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array_2D[i][j] = 0;

	return (array_2D);
}
