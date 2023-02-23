#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: integer value
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x < n + 1; x++)
		{
			for (y = 0; y < n + 1; y++)
			{
				z = x * y;
				if (z >= 100)
				{
					_putchar(' ');
					_putchar('0' + ((z / 10) / 10));
					_putchar('0' + ((z / 10) % 10));
					_putchar('0' + (z % 10));
				}
				else if (z >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (z / 10));
					_putchar('0' + (z % 10));
				}
				else
				{
					if (y != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + z);
				}
				if (y == n)
					continue;
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
