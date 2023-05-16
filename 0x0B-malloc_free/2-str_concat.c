#include "main.h"

/**
 * *str_concat - concatenate 2 strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;
	int l, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	l = len1 + len2;
	s = malloc((l + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		s[i] = s2[j];
	}
	s[l] = '\0';

	return (s);
}
