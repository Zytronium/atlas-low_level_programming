#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: the number of arguments supplied to argv[]
 * @argv: arguments supplied to main, including the name of the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
