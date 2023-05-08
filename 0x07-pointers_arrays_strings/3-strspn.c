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
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j] && accept[j] != '\0')
		{
			i++;
			break;
		}	
	}
	return (i);
}
