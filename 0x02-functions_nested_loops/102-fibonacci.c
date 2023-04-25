#include <stdio.h>

/**
 * main - entry
 *
 * Description: Print fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int c;
	long int x, y, z;

	x = 0;
	y = 1;
	z = 0;
	for (c = 0; c < 49; c++)
	{
		z = x + y;
		printf("%li, ", z);
		x = y;
		y = z;
	}
	z = x + y;
	printf("%li\n", z);
	return (0);
}
