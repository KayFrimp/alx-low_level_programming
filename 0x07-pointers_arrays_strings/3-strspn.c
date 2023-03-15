/**
 * _strspn - Get the length of a prefix substring
 * @s: char pointer to string
 * @accept: char pointer to prefix substring
 *
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int j, a_len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	while (*s)
	{
		for (j = 0; j < a_len; j++)
		{
			if (*s == accept[j])
			{
				x += 1;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (x);
		}
		s++;
	}

	return (x);
}
