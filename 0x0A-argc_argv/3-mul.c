#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of string arguments
 *
 * Return: Always 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (1);
}
