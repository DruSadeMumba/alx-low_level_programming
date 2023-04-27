#include "main.h"

/**
 * print_numbers - entry
 *
 * Description: print single digits
 */
void print_numbers(void)
{
	int c = 0;

	for (c = 0; c < 10; c++)
		_putchar(c + 48);
	_putchar('\n');
}
