#include "main.h"

/**
 * _strdup - function that returns a pointer to mem
 *
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i, l;
	char *s;

	l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}

	s = malloc((l + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}
	s[l] = '\0';

	return (s);
}
