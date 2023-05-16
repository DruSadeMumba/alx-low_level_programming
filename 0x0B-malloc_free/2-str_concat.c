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
	unsigned int i, j, l, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	l = len1 + len2;
	s = malloc((l + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		s[i] = s2[j];
	}
	s[l] = '\0';
	return (s);
}
