#include "main.h"

/**
 * error - error
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply 2 ints
 *
 * @argc: arguements
 * @argv: vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, l, i, c, x, y, *ans, n = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !isdigit(*s1) || !isdigit(*s2))
		error();
	len1 = strlen(s1);
	len2 = strlen(s2);
	l = len1 + len2 + 1;
	ans = malloc(sizeof(int) * l);
	if (!ans)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		ans[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		x = s1[len1] - '0';
		c = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			y = s2[len2] - '0';
			c += ans[len1 + len2 + 1] + (x * y);
			ans[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			ans[len1 + len2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (ans[i])
			n = 1;
		if (n)
			_putchar(ans[i] + '0');
	}
	if (!n)
		_putchar('0');
	_putchar('\n');
	free(ans);
	return (0);
}
