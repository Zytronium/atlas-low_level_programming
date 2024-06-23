#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all the given parameters (except n)
 * (assuming n is the number of parameters given)
 *
 * @n: number of parameters (excluding itself).
 *
 * Return: the sum of the first n parameters (excluding n)
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i = 0;
	va_list list;

	va_start(list, n);
	while (i <= n) {
		result += va_arg(list, int);
		i++;
	}
	va_end(list);

	return (result);
}
