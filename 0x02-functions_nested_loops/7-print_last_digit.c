#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x >= 0)
	{
		_putchar('0' + x);
		return (x);
	}
	if (x <= 0)
	{
		_putchar('0' + -x);
		return (-x);
	}
	return (0);
}
