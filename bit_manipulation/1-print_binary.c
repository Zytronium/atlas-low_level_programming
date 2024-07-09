#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints a number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int max = 1;

	while (max < n)
	{
		max <<= 1;
		if (max >= n)
			break;
	}

	while (max > 0)
	{
		if (max <= n)
		{
			n -= max;
			printf("1");
		}
		else
			printf("0");

		max >>= 1;
	}
}
