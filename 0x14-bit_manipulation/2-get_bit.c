#include "main.h"

/**
 * get_bit - get bit value
 * @n: decimal
 * @index: position
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max;
	int bit;

	max = (sizeof(n) * 8);

	if (index > max)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
