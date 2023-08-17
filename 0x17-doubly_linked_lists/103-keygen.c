#include "lists.h"

/**
 * main - generate password
 * @argc: num of args
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char pass[7], *code;
	int len = strlen(argv[1]), i, n;

	(void)argc;
	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	n = (len ^ 59) & 63;
	pass[0] = code[n];

	n = 0;
	for (i = 0; i < len; i++)
		n += argv[1][i];
	pass[1] = code[(n ^ 79) & 63];

	n = 1;
	for (i = 0; i < len; i++)
		n *= argv[1][i];
	pass[2] = code[(n ^ 85) & 63];

	n = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > n)
			n = argv[1][i];
	}
	srand(n ^ 14);
	pass[3] = code[rand() & 63];

	n = 0;
	for (i = 0; i < len; i++)
		n += (argv[1][i] * argv[1][i]);
	pass[4] = code[(n ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		n = rand();
	pass[5] = code[(n ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
