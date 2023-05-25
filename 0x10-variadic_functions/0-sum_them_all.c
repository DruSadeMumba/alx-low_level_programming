#include "variadic_functions.h"

/**
 * sum_them_all - add ints
 *
 * @n: number of args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...);
int x, sum = 0;
unsigned int i;
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i == 0)
			sum = x;
		else if (i > 0)
			sum += x;
	}
	va_end(args);
	return (sum);
}
