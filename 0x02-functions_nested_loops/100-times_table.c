#include "main.h"
/**
 * print_times_table - entry
 * Description: print times table
 * @n: integer
 * Return: 0
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(48);
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + 48);
				} else if (z > 9 && z < 100)
				{
					_putchar(' ');
					_putchar(z / 10 + 48);
					_putchar(z % 10 + 48);
				} else if (z > 99)
				{
					_putchar(z / 100 + 48);
					_putchar((z - 100) / 10 + 48);
					_putchar(z % 10 + 48);
				}
			}
			_putchar('\n');
		}
	}
}
