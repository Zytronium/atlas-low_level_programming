#include <stdio.h>
/**
 * main - prints 1 - 100 seperated by spaces, except:
 * if the number is divisible by 3, print 'Fizz' instead,
 * if the number is divisible by 5, print 'Buzz' instead,
 * if it is divisible by both, print 'FizzBuzz' instead.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		if (i % 5 && i % 3)
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
