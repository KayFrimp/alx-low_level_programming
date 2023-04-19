#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a given index
 * @n: pointer to unsigned long int
 * @index: bit index
 *
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
