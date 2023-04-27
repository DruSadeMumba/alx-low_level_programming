#include "main.h"

/**
 * print_diagonal - entry
 *
 * Descrpiption: Print diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int s, x;

	for (s = 0; s < n; s++)
	{
		for (x = 0; x < s; x++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
