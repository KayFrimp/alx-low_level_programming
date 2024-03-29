#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all it's parameters
 * @n: Known parameter
 *
 * Return: Sum of parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);
	va_end(list);
	return (sum);
}
