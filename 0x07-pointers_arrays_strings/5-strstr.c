/**
 * _strstr - Finds and returns a pointer to the beginning of the
 *           located substring.
 * @haystack: The pointer to the string to be scanned
 * @needle: The substring to locate
 *
 * Return: Pointer to beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i = 0;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
					j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}

	return ('\0');
}
