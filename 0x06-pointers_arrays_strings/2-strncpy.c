#include "main.h"

/**
 * *_strncpy - copies string pointed by src to buffer of dest
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: Integer variable
 *
 * Return: Always pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
