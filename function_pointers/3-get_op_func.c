#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform
 * the math operation specified by the user
 *
 * @s: operator passed as argument to the program
 * (+, -, *, etc.)
 *
 * Return: pointer to function that corresponds to
 * the operator passed as argument to the program
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i = 0;

	if (s[1])
	{
		printf("Error\n");
		exit(99);
	}

	while (i <= 5)
	{

		i++;
	}


}
