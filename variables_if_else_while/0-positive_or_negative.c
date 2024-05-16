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
        printf("Hello, World!\n");
        return (0);
}
