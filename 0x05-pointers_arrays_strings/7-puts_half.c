#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: Character pointer variable
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = (len - 1) / 2; i < (len - 1); i++)
			_putchar(*(str + (i + 1)));
	}
	_putchar('\n');
}
