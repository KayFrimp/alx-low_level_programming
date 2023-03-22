#include <stdlib.h>

/**
 * array_iterator - Executes a param fxn on each element of an array
 * @array: Array pointer
 * @size: Size of array
 * @action: Function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		i =  0;
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
