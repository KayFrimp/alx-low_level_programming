#include "search_algos.h"
#include <stdio.h>


/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm
 * @array: Pointer to the first element of the athe array of integers
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: first index where value is located or -1 for NULL array
 * or value not present in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
