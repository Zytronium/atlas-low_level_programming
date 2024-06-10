#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: number or arguments passed to argv[], including the program's name
 * @argv: arguments supplied main, including the program's name
 *
 * Return: 0 on success, or 1 if it fails
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
