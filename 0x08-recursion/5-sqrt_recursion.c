#include "main.h"

/**
 * _sqrt_recursion - Computes square root of n
 * @n: Integer number
 *
 * Return: Return value of sqrt_wrapper fxn
 */
int _sqrt_recursion(int n)
{
	return (sqrt_wrapper(n, 1));
}


/**
 * sqrt_wrapper - Guesses the square root of a number
 * @x: Integer variable
 * @guess: Square root guess number
 *
 * Return: -1 for non natural square root and square root
 */
int sqrt_wrapper(int x, int guess)
{
	if (guess * guess == x)
		return (guess);
	if (guess * guess > x)
		return (-1);

	return (sqrt_wrapper(x, (guess + 1)));
}
