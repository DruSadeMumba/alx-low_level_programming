#include "main.h"

/**
 * print_binary - convert to binary
 *
 * @n: int
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = n;
	int x = 0;

	if (!n)
	{
		_putchar(48);
		return;
	}
	while ((i >>= 1) > 0)
		x++;

	while (x >= 0)
	{
		if ((n >> x) & 1)
			_putchar(49);
		else
			_putchar(48);
		x--;
	}
}
