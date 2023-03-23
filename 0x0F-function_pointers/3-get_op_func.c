#include <stdlib>

/**
 * get_op_func - Selects the correct function
 *               to perform an arithmetic operation
 * @s: Operator passed as argument to the program
 *
 * Return: Result of operation or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	return (0);
}
