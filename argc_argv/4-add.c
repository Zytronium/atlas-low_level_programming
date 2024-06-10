#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * has_error - check for non-number characters in the string.
 * If any of the supplied numbers have non-number characters in them,
 * Print "Error" with a newline, and return 1.
 *
 * @number: character array to be checked if it's all numbers
 *
 * Return: 0 if it's all numbers; 1 if not.
 */
int has_error(char *number)
{
	unsigned int i;

	for (i = 0; i < strlen(number); i++)
	{
		if (number[i] > '9' || number[i] < '0')
			return (1);
	}

	return (0);
}

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

	for (i = 1; i < argc; i++)
	{
		if (has_error(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
		if ((int) sum < 0) /*int overflow*/
		{
			printf("Error: Int overflow detected\n");
			return (1);
		}
	}

	printf("%u\n", sum);

	return (0);
}
