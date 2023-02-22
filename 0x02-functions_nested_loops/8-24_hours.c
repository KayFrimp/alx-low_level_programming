#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always void (Success)
 */
void jack_bauer(void)
{
	int m, n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar(':');
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar('\n');
		}
	}
	return;
}
