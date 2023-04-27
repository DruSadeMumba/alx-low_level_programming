#include "main.h"

/**
 * _isdigit - entry
 *
 * Description: check if char is digit
 * @c: character
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
