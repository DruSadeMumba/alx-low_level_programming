#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: int
 *
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
