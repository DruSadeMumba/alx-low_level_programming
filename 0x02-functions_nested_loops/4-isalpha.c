#include "main.h"

/**
 * _isalpha - entry
 *
 * Description: check if character is an alphabet
 * @c: character
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
