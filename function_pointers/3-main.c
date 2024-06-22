#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point | prints result
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *operator = argv[3];
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[4]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
