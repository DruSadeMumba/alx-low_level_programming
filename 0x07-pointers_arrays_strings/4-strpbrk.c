#include "main.h"

/**
 * _strpbrk - locate a string for any of a set of bytes
 *
 * @s: pointer
 * @accept: pointer
 * @s: pointer
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
