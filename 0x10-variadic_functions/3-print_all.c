#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed
 *          to the function.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, print;
	char *str;
	va_list all_list;

	va_start(all_list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all_list, int));
			print = 1;
			break;
		case 'i':
			printf("%d", va_arg(all_list, int));
			print = 1;
			break;
		case 'f':
			printf("%f", va_arg(all_list, double));
			print = 1;
			break;
		case 's':
			str = va_arg(all_list, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
			print = 1;
			break;
		default:
			print = 0;
			break;
		}
		if (format[i + 1] != '\0' && print == 1)
			printf(", ");
		i++;
	}
	va_end(all_list);
	printf("\n");
}
