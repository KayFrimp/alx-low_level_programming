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
    	size_t step = sqrt(size);
    	size_t prev = 0;

	if (array == NULL)
	{
        	return (-1);
    	}    
    	while (array[step < size ? step : size] < value)
	{
        	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        	prev = step;
        	step += sqrt(size);
        	if (prev >= size)
            		return -1;
    	}
    
    	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
    
    	while (array[prev] < value)
	{
        	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        	prev++;
        	if (prev == (step < size ? step : size))
            		return (-1);
    	}

    	if (array[prev] == value)
	{
        	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        	return (prev);
    	}

    	return (-1);
}

