#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int m, n, x;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			x = m * n;
			if (x >= 10)
			{
				_putchar(' ');
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
				if (n == 9)
					continue;
				_putchar(',');
			}
			else
			{
				if (n != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + x);
				if (n == 9)
					continue;
				_putchar(',');
			}
			if (n == 9)
				continue;
		}
		_putchar('\n');
	}
}
