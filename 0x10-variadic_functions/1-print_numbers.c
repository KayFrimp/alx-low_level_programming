#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
		va_end(numbers);
	}
	printf("\n");
}
