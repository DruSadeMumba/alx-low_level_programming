#include "main.h"

/**
 * _puts - entry
 *
 * Description: print string
 * @str: pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}