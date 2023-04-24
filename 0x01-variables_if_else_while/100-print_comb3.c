#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print combination of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' | i);
				putchar('0' | j);

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
