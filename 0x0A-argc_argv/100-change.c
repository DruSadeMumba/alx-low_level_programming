#include "main.h"

/**
 * main - get change
 *
 * @argc: num of arg
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, x, change;
	int shillings[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	change = 0;

	if (x >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (x >= shillings[i])
			{
				change++;
				x -= shillings[i];
			}
		}
	} else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", change);
	return (0);
}
