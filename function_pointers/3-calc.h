#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int main(int argc, char *argv[]);

#endif