#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: decimal 1
 * @m: decimal 2
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int i = 0;

	for (; x; i++)
		x &= (x - 1);
	return (i);
}
