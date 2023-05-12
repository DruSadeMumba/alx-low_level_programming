#include "main.h"

/**
 * string_to_int - convert string to int
 *
 * @str: string to be converted
 *
 * Return: num
 */
int string_to_int(char str[])
{
	int i, l, num;

	l = strlen(str);
	num = 0;

	for (i = 0; i < l; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			num = num * 10 + (str[i] - 48);
		}
	}
	return (num);
}

/**
 * main - add positive numbers
 *
 * @argc: num of args
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, x, sum;
	char *q;

	sum = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], &q, 10);
			if (!(*q))
			{
				sum += x;
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
	} else if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", sum);
	return (0);
}
