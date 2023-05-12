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

	sum = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			x = string_to_int(argv[i]);
			if (x >= 0 && isdigit(x))
			{
				sum += x;
			} else if (!isdigit(x))
			{
				printf("Error\n");
				return (1);
			}
			break;
		}
		printf("%d\n", sum);
	} else if (argc < 3)
	{
		printf("0\n");
	}
	return (sum);
}
