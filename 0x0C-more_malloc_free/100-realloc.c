#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 *
 * Return: s
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *a = ptr;
	unsigned int i, j;

	j = new_size;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	} else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	} else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		s[i] = a[i];
	free(ptr);
	return (s);
}
