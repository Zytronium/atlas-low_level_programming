o#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", INT_MIN);
	int i = INT_MIN + 10;
	i = i * -1;
	printf("%d\n", i % 10);
	printf("%d\n", i);
	i += 10;
	printf("%d\n", i % 10);
        printf("%d\n", i);

	printf("%d\n", INT_MAX);
	printf("%d\n", i % 10);

	return (0);
}
