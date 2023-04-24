#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
