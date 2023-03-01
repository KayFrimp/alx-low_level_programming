#include "main.h"

/**
 * *_strcpy - copies string pointed by a src pointer to a dest pointer
 * @src: Character pointer variable of source
 * @dest: Character pointer variable of destination
 *
 * Return: Returns pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, c;

	while (*(src + len) != 0)
		len++;
	for (c = 0; c <= len; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
