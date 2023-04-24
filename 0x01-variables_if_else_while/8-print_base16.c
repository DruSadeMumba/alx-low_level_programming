#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: print hex numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		putchar('0' | i);
	}
	for (x = 'A'; x <= 'F'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
