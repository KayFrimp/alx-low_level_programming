#include <stdlib>

/**
 * str_concat - Appends s1 with s2 and stores in a new memory location.
 * @s1: Pointer to a string
 * @s2: Pointer to another string
 *
 * Return: NULL of pointer to new memory allocation
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int s1_len = 0, s2_len = 0, i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	dest = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		dest[(s1_len) + j] = s2[j];
	}
	dest[s1_len + j] = '\0';
	return (dest);
}
