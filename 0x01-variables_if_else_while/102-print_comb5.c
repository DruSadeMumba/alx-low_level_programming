#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Combinatio of 2 double-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99 ; j++)
		{
			if (i != j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (j * 100 + i != 9899)
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
