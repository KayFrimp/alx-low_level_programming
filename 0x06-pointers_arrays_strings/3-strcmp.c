#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: Character pointer variable
 * @s2: Character pointer variable
 *
 * Return: 0, +/-number
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	if (s1 == s2)
		return (0);
	for (i = 0, j = 0; *(s1 + i) != '\0' || *(s2 + j) != '\0'; i++, j++)
	{
		if (*(s1 + i) == *(s2 + j))
			continue;
		if (*(s1 + i) < *(s2 + j))
		{
			res = (*(s1 + i) - *(s2 + j));
			break;
		}
		if (*(s1 + i) > *(s2 + j))
		{
			res = (*(s1 + i) - *(s2 + j));
			break;
		}
	}

	return (res);
}
