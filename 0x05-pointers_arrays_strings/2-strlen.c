#include "main.h"

/**
 * _strlen - entry
 *
 * Description: Find the length of a string
 * @s: char
 *
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
