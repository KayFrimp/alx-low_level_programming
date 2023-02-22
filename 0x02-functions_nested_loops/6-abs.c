#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: integer value
 *
 * Return: the absolute number  and 0 always
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	if (x <= 0)
		return (-x);
	return (0);
}
