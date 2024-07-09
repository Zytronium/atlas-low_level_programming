#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints a number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int max = 1;

	while ((unsigned long int) max < n)
	{
		max <<= 1;
		if ((unsigned long int) max >= n)
			break;
		/*i++;*/
	}

	while ((unsigned long int) max > 0)
	{
		if ((unsigned long int) max <= n)
		{
		
			printf("1");
		}
		else
			printf("0");

		n -= max;
		max >>= 1;
	}
}

/**
 * xPowY - exponent of to the power of y
 *
 * @x: x
 * @y: y
 *
 * Return: x to the power of y
 */
int xPowY(int x, int y)
{
	int i, output = 1;

	for (i = 0; i < y; i++)
		output *= x;

	return (output);
}
