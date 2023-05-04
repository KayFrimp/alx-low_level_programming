#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to unsigned long integer value
 * @index: index of bit
 *
 * Return: 1 if it works and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
