#include "main.h"

/**
 * square - print natural square
 *
 * @x: square
 * @y: int
 *
 * Return: x
 */
int square(int x, int y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if ((x * x) > y)
	{
		return (-1);
	}
	return (square(x + 1, y));
}

/**
 * _sqrt_recursion - print natural square
 *
 * @n: int
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(0, n));
}
