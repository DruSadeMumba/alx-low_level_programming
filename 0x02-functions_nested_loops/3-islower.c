#include "main.h"

/**
 * _islower - entry
 *
 * Description: print lowercase letters
 * @c: character
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
