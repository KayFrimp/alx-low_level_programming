#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculator Function Calls
 * @argc: Number of arguments
 * @argv: Array of pointers  to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*calc_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc_ptr = get_op_func(argv[2]);
	if (!calc_ptr)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0) ||
	    (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", calc_ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
