#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	i = 0;
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			} else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
