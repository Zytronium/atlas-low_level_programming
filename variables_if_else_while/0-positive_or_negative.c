#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints whether a randomly generated number is positive, negative, or equal to zero. The number is different each time this is ran.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        printf("%d %s\n", n, (n > 0) ? "is positive" : (n < 0) ? "is negative" : "is zero");
        return (0);
}


