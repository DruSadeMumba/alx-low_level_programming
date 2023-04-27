#include "main.h"

/**
 * print_triangle - entry
 *
 * Description: Print triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int l, w, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size - l; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (w = 1; w <= l; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
