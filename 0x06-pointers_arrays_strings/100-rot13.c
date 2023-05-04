#include "main.h"

/**
 * rot13 - encode string
 *
 * @c: char
 * Return: char
 */
char *rot13(char *c)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[j] == *(c + i))
			{
				*(c + i) = b[j];
				break;
			}
		}
	}
	return (c);
}
