#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Description: print alphabet 10 x
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
