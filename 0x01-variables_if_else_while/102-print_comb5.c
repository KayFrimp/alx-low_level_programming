#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, x;

	for (m = 0; m < 99; m++)
	{
		for (x = m + 1; x < 100; x++)
		{
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			putchar(' ');
			putchar('0' + (x / 10));
			putchar('0' + (x % 10));
			if (m == 98 && x == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
