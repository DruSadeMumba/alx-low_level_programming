#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: 1st int in range
 * @max: last int in range
 *
 * Return: s
 */
int *array_range(int min, int max)
{
	int *s; 
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min;

	s = malloc (sizeof(*s) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i >= min && i <= max; i++)
		s[i] = min++;

	return (s);
}
