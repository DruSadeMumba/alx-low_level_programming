#include "main.h"

/**
 * _atoi - convert string to int
 *
 * @s: pointer
 *
 * Return: 1
 */
int _atoi(char *s)
{
	int a, b, c;
	unsigned int d;

	a = 1;
	b = 0;
	c = 0;
	d = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			a *= -1;
		}
		while (s[c] > 47 && s[c] < 58)
		{
			b = 1;
			d = (d * 10) + (s[c] - '0');
			c++;
		}
		if (b == 1)
		{
			break;
		}
		c++;
	}
	d *= a;
	return (d);
}
