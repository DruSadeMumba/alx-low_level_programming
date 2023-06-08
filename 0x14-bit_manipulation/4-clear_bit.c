#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: decimal
 * @index: position
 * Return: n
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int x = 1;

	max = (sizeof(*n) * 8);
	if (index > max)
		return (-1);

	x = ~(x << index);
	*n = *n & x;
	return (1);
}
