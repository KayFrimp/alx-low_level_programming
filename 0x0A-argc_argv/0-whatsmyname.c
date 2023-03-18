#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Number of arguments
 * @argv: Array of the arguments passed as strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
