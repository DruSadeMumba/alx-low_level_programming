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
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (int y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
