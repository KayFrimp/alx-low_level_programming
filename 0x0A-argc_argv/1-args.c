#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of string arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
