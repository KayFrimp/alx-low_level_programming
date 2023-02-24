#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Integer variable
 *
 * Return: 1 if c is uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
