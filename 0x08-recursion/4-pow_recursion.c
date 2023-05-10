#include "main.h"

/**
 * _pow_recursion - print power of an int
 *
 * @x: int
 * @y: power of int
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
