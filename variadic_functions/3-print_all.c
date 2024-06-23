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
		char f = format[i];

		if (f == 'c' || f == 'i' || f == 'f' || f == 's')
		{
			if (va_arg(args, char *) == NULL)
				printf("(nil)");
			printf("%s",va_arg(args, char *));
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
