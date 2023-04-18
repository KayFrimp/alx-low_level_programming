#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: unsigned long integer
 * @index: position of bit
 *
 * Return: Bit value at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, mul = 1;

	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	while (index > 0)
	{
		mul = mul * 2;
		index--;
	}
	if ((n & mul) > 0)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
