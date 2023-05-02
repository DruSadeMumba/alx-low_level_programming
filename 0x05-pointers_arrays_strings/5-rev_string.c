#include "main.h"

/**
 * rev_string - entry
 *
 * Description: Function that reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	int i, a, b;
	char c;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	b = i - 1;
	for (a = 0; b >= 0 && a < b; b--, a++)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
