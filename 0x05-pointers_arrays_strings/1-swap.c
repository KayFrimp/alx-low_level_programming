#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Intger value 1
 * @b: Integer value 2
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
