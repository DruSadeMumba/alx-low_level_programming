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
	int i = n % 10;

	if (n < 0)
	{
		i = i * -1;
	}
	_putchar('0' | i);
	return (i);
}
