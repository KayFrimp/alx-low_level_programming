#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;

	va_start(string_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string_list, char *));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		if (separator == NULL)
			printf("(nil");
	}
	va_end(string_list);
	printf("\n");
}
