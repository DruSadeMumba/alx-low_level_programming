#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: 1
 */
int _strcmp(char *s1, char *s2)
{
	int sc;

	while ((*s1 == *s2) && ((*s1 != '\0') && (*s2 != '\0')))
	{
		s1++;
		s2++;
	}
	sc = *s1 - *s2;
	return (sc);
}
