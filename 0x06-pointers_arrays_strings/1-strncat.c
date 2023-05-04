#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @src: string
 * @dest: string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
