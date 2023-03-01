#include "main.h"

/**
 * puts2 - prints every other character of a
 * string starting from the first character.
 * @str: character pointer variable
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (*(str + i) == '\0')
			break;
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
