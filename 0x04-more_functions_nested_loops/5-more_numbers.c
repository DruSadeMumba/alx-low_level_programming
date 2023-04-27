#include "main.h"

/**
 * more_numbers - entry
 *
 * Description: print ints
 */
void more_numbers(void)
{
	int i = 0;
	int c = 0;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(48 + i / 10);
			}
			_putchar(48 + i % 10);
		}
		_putchar('\n');
	}
}
