#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result followed by a new line
 *
 * @argc: number of arguments supplied to argv[], including the program name
 * @argv: arguments supplied to main, including the program's name
 *
 * Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
	{
		/*
		 * If any of the supplied numbers to add are not zero, but
		 * atoi(that argument) is zero (which means atoi gave an error,
		 * which means there was a non-number character (besides + or - signs)
		 * in the string), or if any of the numbers starts with '-', then:
		 * Print "Error" with a newline, and return 1.
		 */
		if ((atoi(argv[i]) == 0 && argv[i][0] != '0') || argv[i][0] == '-')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
