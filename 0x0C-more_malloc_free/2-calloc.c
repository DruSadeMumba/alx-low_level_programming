#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: num of elements in array
 * @size: size
 *
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i, x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = nmemb * size;
	s = malloc(x);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		s[i] = 0;

	return (s);
}
