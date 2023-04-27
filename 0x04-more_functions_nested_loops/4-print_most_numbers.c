#include "main.h"

/**
 * print_most_numbers - entry
 *
 * Description: Print some numbers
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + 48);
	_putchar('\n');
}
