#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 * aka addition.
 * Or addiction, depending on how much you like simple math
 *
 * @a: first number given to perform operation on
 * @b: second number given to perform operation on
 *
 * Return: result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between a and b
 * aka subtraction
 *
 * @a: first number given to perform operation on
 * @b: second number given to perform operation on
 *
 * Return: result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * aka multiplication
 *
 * @a: first number given to perform operation on
 * @b: second number given to perform operation on
 *
 * Return: result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of a and b
 * aka division
 *
 * @a: first number given to perform operation on
 * @b: second number given to perform operation on
 *
 * Return: result of the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the quotient of a and b
 * aka modulo
 *
 * @a: first number given to perform operation on
 * @b: what do you think
 *
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
