#include "main.h"

/**
 * cap_string - change first letters to uppercase
 *
 * @s: first letter
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			if (i == 0)
			{
				*(s + i) -= 97 - 65;
			} else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) -= 97 - 65;
					}
				}
			}
		}
		i++;
	}
	return (s);
}

