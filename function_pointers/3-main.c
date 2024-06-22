#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point | prints result
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char operator = argv[3][0];
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[4]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[3]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
