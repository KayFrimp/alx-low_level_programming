#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of string arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *ptr;

	if (argc < 2)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			for (j = 0; j < (int)strlen(ptr); j++)
			{
				if (isdigit(ptr[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
