#include "main.h"

/**
 * _isupper - entry
 *
 * Description: Determine whether letter is uppercase
 * @c: character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
