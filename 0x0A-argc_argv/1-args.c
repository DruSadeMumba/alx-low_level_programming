#include "main.h"

/**
 * main - print number of arguments
 *
 * @argc: number of args
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv[argc];

	printf("%d\n", argc - 1);
	return (0);
}
