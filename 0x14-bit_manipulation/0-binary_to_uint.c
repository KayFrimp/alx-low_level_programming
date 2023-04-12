#include <stdio.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: Converted number or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int pow, i;
	unsigned int res = 0, len = 0, mul = 1, j;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if ((b[i] - '0') == 1 || (b[i] - '0') == 0)
		{
			pow = j;
			while (pow > 0)
			{
				mul = mul * 2;
				pow--;
			}
			res += ((b[i] - '0') * mul);
			mul = 1;
		}
		else
			return (0);
	}
	return (res);
}
