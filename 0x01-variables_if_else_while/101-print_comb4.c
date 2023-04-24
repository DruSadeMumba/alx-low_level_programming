#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print combination of 3 digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 10; n++)
			{
				if (i != n && i != j && j != n && i < j && j < n)
				{
					putchar('0' | i);
					putchar('0' | j);
					putchar('0' | n);

					if (i + j + n != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
