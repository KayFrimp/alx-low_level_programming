#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars and initializes with a char
 * @size: Number to multiply bytes by
 * @c: Character to initialize array
 *
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (0);
	while (size > 0)
	{
		ar[size - 1] = c;
		size--;
	}
	return (ar);
}
