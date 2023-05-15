#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: size
 * @c: char
 *
 * Return: chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = (char *) malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
