#include "main.h"

/**
 * print_last_digit - entry
 *
 * Description: print last digit
 * @n: integer
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = (-1) * n;
		i = n % 10;
		_putchar('0' | i);
		return (i);
	}
	i = n % 10;

	_putchar('0' | i);
	return (i);
}
