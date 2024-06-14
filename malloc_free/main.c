#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *s;

	(void) argc;

	switch ((!strcmp(argv[1], "NULL") * 10) + (!strcmp(argv[2], "NULL"))) { /*basically 2 bits of binary code, which can either be 00, 01, 10, or 11*/
		case 0:
			s = str_concat(argv[1], argv[2]);
			break;

		case 1:
			s = str_concat(argv[1], NULL);
			break;

		case 10:
			s = str_concat(NULL, argv[2]);
			break;

		default:
			s = str_concat(NULL, NULL);
			break;
	}
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
