#include "main.h"

/**
 * times_table - entry
 *
 * Description: Print out 9 times table
 */
void times_table(void)
{
	int x, y, n;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <=9; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}
			n = x * y;
			_putchar(',');
			_putchar(' ');
			if (n < 10)
			{
				_putchar(' ');
				_putchar(n + 48);
			} else if (n > 9)
			{
				_putchar(n / 10 + 48);
				_putchar(n % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
