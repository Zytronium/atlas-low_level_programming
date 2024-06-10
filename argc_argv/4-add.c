#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result followed by a new line
 *
 * @argc: number of arguments supplied to argv[], including the program name
 * @argv: arguments supplied to main, including the program's name
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	/*
	 * If there are not exactly 2 supplied arguments (3 including program name)
	 * or if either of the other 2 supplied arguments are not zero, but
	 * atoi(that argument) is zero (which means atoi gave an error, which means
	 * there was a non-number character (besides + or - signs) in the string),
	 * or if one of the 2 arguments starts with '-', then:
	 * Print "Error" with a newline, and return 1.
	 */
	if (
			argc != 3 || (x == 0 && argv[1][0] != '0')
			|| (y == 0 && argv[2][0] != '0')
			|| argv[1][0] == '-'
			|| argv[2][0] == '-'
			)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
