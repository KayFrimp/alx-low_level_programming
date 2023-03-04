#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: Pointer to string
 *
 * Return: The string with all words capitalized.
 */
char *cap_string(char *str)
{
	int i, j;
	char delim[] = {' ', '\t', '\n', ',', ';',
			'.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (*(str + i) == delim[j])
			{
				if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				{
					*(str + i + 1) = *(str + i + 1) - 32;
				}
				else
					continue;
			}
		}
	}

	return (str);
}
