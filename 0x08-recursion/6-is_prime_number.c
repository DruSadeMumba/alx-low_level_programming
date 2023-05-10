#include "main.h"

/**
 * prime - is int prime
 *
 * @x: int
 * @y: int
 *
 * Return: 1 or 0
 */
int prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (prime(x, y - 1));
}

/**
 * is_prime_number - is an int a prime number
 *
 * @n: int
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
