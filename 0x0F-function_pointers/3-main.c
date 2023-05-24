#include "3-calc.h"

/**
 * main - operator
 *
 * @argc: num of args
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	func = get_op_func(argv[2]);
	op = *argv[2];

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == 37 || op == 47) && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(x, y));
	return (0);
}
