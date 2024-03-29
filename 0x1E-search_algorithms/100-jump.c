#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in the array.
 * @value: is the value to search for.
 *
 * Return: the first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end; i++)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
