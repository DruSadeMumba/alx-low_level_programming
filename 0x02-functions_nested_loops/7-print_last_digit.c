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

	i = n % 10;
	_putchar('0' | i);
	return (i);
}
