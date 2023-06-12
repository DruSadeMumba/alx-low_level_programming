#include "main.h"

/**
 * close_file - close
 * @fc: file
 * Reurn: int
 */
void close_file(int fc)
{
	int c;

	c = close(fc);
	if (c == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fc);
		exit(100);
	}
}


/**
 * main - copy
 * @argc: num of args
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, reed, rite;
	char *buffer[1024];
	mode_t mode = 0664;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	reed = read(file_from, buffer, 1024);
	while (rite != 0)
		rite = write(file_to, buffer, reed);

	if (file_from == -1 || reed == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1 || rite == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close_file(file_from);
	close_file(file_to);
	return (0);
}
