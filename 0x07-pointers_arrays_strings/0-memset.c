/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to character
 * @b: variable of type char
 * @n: number of bytes
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
