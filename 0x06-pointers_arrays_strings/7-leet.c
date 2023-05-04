#include "main.h"

/**
 * leet - replace characters
 *
 * @c: char
 * Return: char
 */
char *leet(char *c)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == c[i])
			{
				c[i] = b[j];
			}
		}
	}
	return (c);
}
