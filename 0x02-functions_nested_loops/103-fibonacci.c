#include <stdio.h>

/**
 * main - entry
 *
 * Description: fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int x, y, z, c;

	x = 0;
	y = 1;
	z = 0;
	c = 0;
	while (c < 4000000)
	{
		c = x + y;
		if (c % 2 == 0)
		{
			z += c;
		}
		x = y;
		y = c;
	}
	printf("%li\n", z);
	return (0);
}
