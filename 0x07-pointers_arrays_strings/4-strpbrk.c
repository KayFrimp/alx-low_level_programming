/**
 * _strpbrk - Locates the first occurrence in the string s
 * @s: char pointer to string
 * @accept: char pointer to string to locate
 *
 * Return: Pointer to matching byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j, a_len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	while (*s)
	{
		for (j = 0; j < a_len; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
			else if (accept[j + 1] == '\0')
				break;
		}
		s++;
	}

	return (s);
}
