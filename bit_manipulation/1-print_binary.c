#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints a number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = (unsigned long)1 << (sizeof(unsigned long) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (m > 0)
	{
		if (m <= n)
		{
			n -= m;
			printf("1");
			started = 1;
		}
		else if (started)
			printf("0");

		m >>= 1;
	}
	
}
