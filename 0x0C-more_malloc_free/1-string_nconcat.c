#include "main.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: int
 *
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, len1, len2, i, j;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	} else
		len1 = 0;

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	} else
		len2 = 0;

	if (len2 > n)
		len2 = n;

	l = len1 + len2;
	s = malloc(sizeof(*s) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		s[i] = s2[j];

	s[l] = '\0';
	return (s);
}

