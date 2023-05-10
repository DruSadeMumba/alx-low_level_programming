#include "main.h"

/**
 * factorial - print factorial
 *
 * @n: int
 *
 * Return: -1 on error, factorial(n) on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
