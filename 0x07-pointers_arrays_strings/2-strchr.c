/**
 * _strchr - Locates a character c in a string pointed to by s
 * @s: char pointer to string
 * @c: char pointer to character to locate
 *
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
