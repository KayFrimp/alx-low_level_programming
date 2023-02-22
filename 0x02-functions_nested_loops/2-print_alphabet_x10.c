#include "main.h"

/**
 * print_alphabet_x10 - Function prints 10 times the alphabets in lowercase
 * followed by a new line.
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int count;
	char alphabet;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
