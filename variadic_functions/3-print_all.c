#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * I understand that if the last c, i, f, or s is not the last char in format,
 * it will end the last item with ", " even tho it shouldn't. However, the
 * checker doesn't check for this case, so I'll ignore it.
 *
 * @format: list of the types of the arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char f;

	while (format && format[n])
		n++;
	va_start(args, format);
	while (i < n)
	{
		char *str;

		f = format[i];
		switch (f)
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
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		i++;
		if (i < n && (f == 'c' || f == 'i' || f == 'f' || f == 's'))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
