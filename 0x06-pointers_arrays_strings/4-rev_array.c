#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: an array of integers
 * @n: the number of elements in array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			tmp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = tmp;
		}
	}
}
