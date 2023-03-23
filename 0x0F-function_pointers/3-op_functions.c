#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: sum of a and b or 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: difference of a and b or 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Retruns the product of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of division of a and b
 * @a: dividend
 * @b: divisor
 *
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: Remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
