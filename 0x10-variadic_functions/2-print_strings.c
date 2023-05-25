#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @separator: char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if (i != (n - 1) && *separator)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}
