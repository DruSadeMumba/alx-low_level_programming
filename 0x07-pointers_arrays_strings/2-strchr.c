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
	while (*s)
	{
		if (*s != c && c != '\0')
		{
			s++;
		} else
			return (s);
	}
	return (NULL);
}
