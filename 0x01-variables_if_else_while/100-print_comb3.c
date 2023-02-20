#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;

	for (n = 0; n < 9; n++)
	{
		for (i = 1; i < 10; i++)
		{
			putchar('0' + n);
			putchar('0' + i);
			if (n == 8 && i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
