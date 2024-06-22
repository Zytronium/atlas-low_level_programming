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
	switch (s[0]) {
		case '+':
			return (op_add);
		case '-':
			return (op_sub);
		case '*':
			return (op_mul);
		case '/':
			return (op_div);
		case '%':
			return (op_mod);
		default:
			return (NULL);
		
	}
}
