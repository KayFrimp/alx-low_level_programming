#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: Integer value
 */
void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i == n - 1)
				continue;
			m = i;
			while (m >= 0)
			{
				_putchar(' ');
				m--;
			}
		}
	}
}
