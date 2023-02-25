#include "main.h"

/**
 * print_triangle - prints a trianglle with #
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int i, m, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			m = i;
			while (m < size)
			{
				_putchar(' ');
				m++;
			}
			n = i;
			while (n > 0)
			{
				_putchar('#');
				n--;
			}
			_putchar('\n');
		}
	}
}
