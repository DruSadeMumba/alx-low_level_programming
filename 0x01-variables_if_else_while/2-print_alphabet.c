#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * Description: Print alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
