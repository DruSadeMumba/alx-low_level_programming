#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: pointer
 * @c: char
 *
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
