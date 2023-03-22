#include <stdlib.h>

/**
 * int_index - Searches for an integer from an array
 * @array: Array to search
 * @size: Array size
 * @cmp: Function pointer
 *
 * Return: Index of found integer, 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		i = 0;

		while (i < size)
		{
			res = cmp(*(array + i));
			if (res != 0)
				return (i);
			i++;
		}

		return (-1);
	}

	return (-1);
}
