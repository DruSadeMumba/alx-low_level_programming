#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area pointed to by s with b
 *
 * @s: Pointer
 * @b: char to replace n
 * @n: char to be replaced
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
