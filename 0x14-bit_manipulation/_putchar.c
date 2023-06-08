#include "main.h"

/**
 * _putchar - write char to stdout
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
