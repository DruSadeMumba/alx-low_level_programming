#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: pointer
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - is string palindrom
 * @s: string
 * @i: int
 * @l: length
 * Return: 1 or 0
 */
int palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (palindrome(s, i + 1, l - 1));
}

/**
 * is_palindrome - string is a palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (palindrome(s, 0, _strlen_recursion(s)));
}
