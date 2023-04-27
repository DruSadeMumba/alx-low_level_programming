#include "main.h"

/**
 * print_square - entry
 *
 * Description: Print square
 * @size: int
 */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (w = 1; w < size; w++)
		{
			_putchar(35);
		}
		_putchar(35);
		_putchar('\n');
	}
}
