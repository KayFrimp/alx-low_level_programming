#include <stdio.h>

/**
 * main - computes and prints sum of all multiples
 * of 3 or 5 below 1024.
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0, i = 0;

	while (i != 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	printf("Sum of all multiples of 3 or 5: %d\n", sum);

	return (0);
}
