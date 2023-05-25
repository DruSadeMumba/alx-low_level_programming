#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: string
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
