#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: string
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...);
int x;
unsigned int i;
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (*separator)
		{
			if (i < n - 1)
				printf("%d%c ", x, *separator);
			else if (i == 0 || i == n - 1)
				printf("%d", x);
		} else
		{
			if (i < n - 1)
				printf("%d ", x);
			else if (i == 0 || i == n - 1)
				printf("%d", x);
		}
	}
	printf("\n");
	va_end(args);
}
