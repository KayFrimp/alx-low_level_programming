#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural number
 */
void print_to_98(int n)
{
	int x = 98;

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", x);
}
