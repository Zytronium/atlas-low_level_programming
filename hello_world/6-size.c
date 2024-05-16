#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is run on
 *
 * Return: always 0
 */
int main(void)
{
	char character;
	int integer;
	long int long_int;
	long long int longer_int;
	float floating;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longer_int));
	printf("Size of a float: %f byte(s)\n", sizeof(floating));
	return (0);
}
