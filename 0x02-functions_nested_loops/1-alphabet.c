#include "main.h"

/**
 * main - print_alphabet
 *
 * Description: print the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
