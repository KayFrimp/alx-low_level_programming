#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of string arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
