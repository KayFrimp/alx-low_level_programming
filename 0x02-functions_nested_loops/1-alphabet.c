#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercases
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
