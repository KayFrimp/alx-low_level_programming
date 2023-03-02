#include "main.h"

/**
 * *_strcat  - concatenates two strings
 * @dest: character pointer variable
 * @src: character pointer variable
 *
 * Return: Always a character pointer
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i, j = 0;

	while (*(dest + len) != '\0')
		len++;
	for (i = len; i > 0; i++)
	{
		if (*(src + j) == '\0')
		{
			*(dest + i) = '\0';
			break;
		}
		*(dest + i) = *(src + j);
		j++;
	}
	return (dest);
}
