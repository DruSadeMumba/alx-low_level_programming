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
	unsigned int i, j;

	j = 0;
	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		if (s[i] == accept[j])
		{
			i++;
		} else if (accept[j + 1] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
