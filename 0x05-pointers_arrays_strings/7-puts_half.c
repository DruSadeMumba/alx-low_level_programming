#include "main.h"

/**
 * puts_half - print half the string
 *
 * @str: char
 */
void puts_half(char *str)
{
	int n, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	} else
	{
		n = (i - 1) / 2;
	}
	n++;

	for (i = n - 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
