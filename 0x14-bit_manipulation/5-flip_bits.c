#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 *             to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index, count = 0;

	for (index = 0; index < (sizeof(n) * 8); index++)
	{
		if (((n >> index) & 1) != ((m >> index) & 1))
			count++;
	}
	return (count);
}
