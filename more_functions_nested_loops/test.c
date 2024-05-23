#include <stdio.h>
/**
 * main - descr.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = -10; i <= 25; i++)
	{
		if (i)
			printf("%d\n", i);
		else
			printf("false\n");
	}
	return (0);
}
