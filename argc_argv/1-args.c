#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: the number of arguments supplied to argv[]
 * @argv: arguments supplied to main, including the name of the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
