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
	int i = 0, j = 0, n = strlen(format);

	va_start(args, format);
	while (i < n)
	{
		char f = format[i];

		switch (f) {
			case 'c':
				printf("%c", va_arg(args, char));
				j++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				j++;
				break;
			case 'f':
				printf("%f", va_arg(args, float));
				j++;
				break;
			case 's':
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				printf("%s", va_arg(args, char *));
				j++;
				break;
			default:
				break;
		}

		i++;
	}
	va_end(args);

	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
