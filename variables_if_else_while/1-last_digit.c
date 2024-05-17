#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints a randomly generated number, its last digit, and
 * whether that digit is greater than 5, equal to zero, or less
 * than 6 (and not equal to zero). The number is different each
 * time this is ran.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n.lastDigit();
	printf("The last digit of %d is %d and is", n, x);
	if (x > 5)
	{
		printf("greater than 5\n");
	}
	else if (x == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
