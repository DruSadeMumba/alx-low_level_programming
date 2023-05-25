#include "variadic_functions.h"

/**
 * print_all - print all
 *
 * @format: array of types
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *s, *separator = "";

	va_start(args, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c %c", *separator, va_arg(args, int));
					break;
				case 'i':
					printf("%c %d", *separator, va_arg(args, int));
					break;
				case 'f':
					printf("%c %f", *separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%c %s", *separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
