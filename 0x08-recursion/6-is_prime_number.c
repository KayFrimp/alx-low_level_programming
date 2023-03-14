#include "main.h"

/**
 * is_prime_number - Returns 1 for prime numbers and 0 for otherwise
 * @n: Integer number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (check_prime(n, i));
}

/**
 * check_prime - Returns 1 or 0 for prime or otherwise
 * @n: Integer number
 * @i: Integer iterator number
 *
 * Return: 1 0r 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2 || i == n)
		return (1);
	if (n % i != 0 && i < n)
		return (check_prime(n, i + 1));
	else
		return (0);
}
