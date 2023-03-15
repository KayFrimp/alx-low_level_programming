/**
 * _strchr - Locates a character c in a string pointed to by s
 * @s: char pointer to string
 * @c: char pointer to character to locate
 *
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
