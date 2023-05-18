#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: int
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(b));

	if (s == NULL)
	{
		exit(98);
	}
	return(s);
}
