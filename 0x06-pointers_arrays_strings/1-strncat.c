#include "main.h"

/**
 * *_strncat - concatenates two strings restricted by bytes
 * @dest: Character pointer variable
 * @src: Character pointer variable
 * @n: Integer variable
 *
 * Return: Always a character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j;

	while (*(dest + len) != '\0')
		len++;
	for (j = 0; j < n; j++)
	{
		if (*(src + j) == '\0')
		{
			*(dest + (len + j)) = '\0';
			break;
		}
		*(dest + (len + j)) = *(src + j);
	}

	return (dest);
}
