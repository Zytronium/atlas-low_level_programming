#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - well... it simply prints strings. Specifically,
 * the strings provided in the arguments
 *
 * @separator: the string to be printed between strings
 * @n: number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 1;

	va_start(args, n);
	while (i <= n)
	{
		char *strn = va_arg(args, char *);

		if (strn == NULL)
			strn = "(nil)";

		printf((separator || i == n) ? "%s" : "%s%s", strn, separator);
		i++;
	}

	printf("\n");

	va_end(args);
}
