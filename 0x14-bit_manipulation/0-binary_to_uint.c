#include "main.h"

/**
 * binary_to_uint - convert bin to int
 * @b: binary num
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, n = 0;

	if (!b)
		return (n);
	while (b[len])
		len++;
	len -= 1;
	while (b[i])
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
			n += (1 * (1 << len));
		i++;
		len--;
	}
	return (n);
}
