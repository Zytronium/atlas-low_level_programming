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
//	char formats[5] = "cifs";
	va_list args;
	int i = 0, j = 0;

	while (i < strlen(format))
	{
		switch (format[j]) {
			case 'c':
				//char
				j++;
				break;
			case 'i':
				//integer
				j++;
				break;
			case 'f':
				//float
				j++;
				break;
			case 's':
				//string
				j++;
				break;
			default:
				//do not increment format index
				break;
		}
		i++;
	}
	printf("\n");
}
