#include "main.h"

/**
 * print_sign - prints +, 0 or - based on the number
 * @n: variable to hold number
 *
 * Return: Either of: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
