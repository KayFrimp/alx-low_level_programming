#include "search_algos.h"
#include <stdio.h>


/**
 * binary_search - Searches for a value in an array of integers
 * using the binary search algorithm
 * @array: Pointer to the first element of the athe array of integers
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: index where value is located or -1 for NULL array
 * or value not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], i == right ? "\n" : ", ");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);

}
