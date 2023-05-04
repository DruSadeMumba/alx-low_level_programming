#include "main.h"

/**
 * string_toupper - change string to uppercase
 *
 * @a: char
 *
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) = *(a + i) - 32;
		}
		i++;
	}
	return (a);
}
