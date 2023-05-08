#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 *
 * @dest: pointer
 * @src: pointer
 * @n: int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
