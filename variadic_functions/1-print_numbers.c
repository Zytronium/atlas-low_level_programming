#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - well... it simply prints numbers. Specifically,
 * the numbers provided in the arguments
 *
 * @separator: the string to be printed between numbers
 * @n: number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
