#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything.
 *
 * @format: list of the types of the arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n = strlen(format);

	va_start(args, format);
	while (i < n)
	{
		char *str = va_arg(args, char *);

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}

		i++;
	}
	va_end(args);

	printf("\n");
}
