/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: Integer value to check it's power
 * @y: power to raise x by
 *
 * Return: value of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
