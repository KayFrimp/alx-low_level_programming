#include "main.h"
#include "stdio.h"

/**
* rev_string - Reverses a string
* @s: character pointer variable
*/
void rev_string(char *s)
{
	int len = 0, i, j;
	char tmp;

	while (*(s + len) != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			tmp = *(s + i);
			*(s + i) = *(s + j);
			*(s + j) = tmp;
		}
	}
}
