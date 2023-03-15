#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @src: char pointer to src memory area
 * @dest: char pointer to dest memory area
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
