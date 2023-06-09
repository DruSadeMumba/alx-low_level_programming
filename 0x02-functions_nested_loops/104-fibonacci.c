#include <stdio.h>

/**
 * num - entry
 *
 * Description: length
 * @n: integer
 *
 * Return: 0
 */
int num(int n)
{
	int l = 0;

	if (!n)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		l += 1;
	}
	return (l);
}
/**
 * main - next function
 *
 * Return: 0
 */
int main(void)
{
	unsigned long x = 1, y = 2, z, mx = 100000000, xo = 0, yo = 0, zo = 0;
	short int i = 1, j;

	while (i <= 98)
	{
		if (xo > 0)
		{
			printf("%lu", xo);
		}
		j = num(mx) - 1 - num(x);
		while (xo > 0 && j > 0)
		{
			printf("%i", 0);
			j--;
		}
		printf("%lu", x);

		z = (x + y) % mx;
		zo = xo + yo + (x + y) / mx;
		x = y;
		xo = yo;
		y = z;
		yo = zo;

		if (i != 98)
		{
			printf(", ");
		} else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
