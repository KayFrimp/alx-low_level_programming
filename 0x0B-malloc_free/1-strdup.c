#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is
 *           a duplicate of the string str.
 * @str: The string to duplicate
 *
 * Return: NULL or pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dstr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dstr = malloc((len + 1) * sizeof(char));
	if (dstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dstr[i] = str[i];
	dstr[i] = '\0';
	return (dstr);
}
