#include <stdio.h>
#include <time.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(n);
        printf(if (n > 0) "is positive\n" else if (n < 0) "is negative\n" else "is zero\n");
        return (0);
}
