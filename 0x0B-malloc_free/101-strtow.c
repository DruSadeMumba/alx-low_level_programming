#include "main.h"

/**
 * num_of_words - num of words
 * @s: string
 *
 * Return: int
 */
int num_of_words(char *s)
{
	int flag, i, c;

	flag = c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			c++;
		}
	}
	return (c);
}

/**
 * strtow - split a string into words
 *
 * @str: string
 *
 * Return: pointer to an array of string
 */
char **strtow(char *str)
{
	char **s, *a;
	int c, i, j, l, w, x, y;

	j = l = c = 0;

	while (*(str + l))
		l++;

	w = num_of_words(str);

	if (w == 0)
		return (NULL);

	s = malloc((w + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				y = i;
				a = malloc((c + 1) * sizeof(char));
				if (a == NULL)
					return (NULL);
				while (x < y)
					*a++ = str[x++];
				*a = '\0';
				s[j] = a - c;
				j++;
				c = 0;
			}
		} else if (c++ == 0)
			x = i;
	}
	s[j] = NULL;
	return (s);
}
