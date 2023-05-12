#include "main.h"

/**
 * string_to_int - convert string to int
 *
 * @str: string to convert
 *
 * Return: num
 */
int string_to_int(char str[])
{
	int i, l, num;

	num = 0;
	l = strlen(str);
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
 * main -  multiply two numbers
 *
 * @argc: number of args
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc == 3)
	{
		x = string_to_int(argv[1]);
		y = string_to_int(argv[2]);

		mul = x * y;
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
