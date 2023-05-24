#include "function_pointers.h"

/**
 * main - print opcodes
 *
 * @argc: num of args
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
