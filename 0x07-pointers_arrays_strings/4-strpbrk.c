#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence in the string s
 * @s: char pointer to string
 * @accept: char pointer to string to locate
 *
 * Return: Pointer to matching byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (s);
}
