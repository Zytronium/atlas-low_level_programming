#include <stdio.h>
#include <stdlib.h>

/**
 * Returns whether an unsigned int is positive or not.
 * since unsigned ints are always 0 or higher, and 0 is
 * neither positive or negative, this simply returns n.
 *
 * Note: this does not exclusively return 1 or 0, but
 * it still works if used as a boolean, since 0 is false
 * and anything else is true.
 *
 * Note2: If you pass a negative int instead of an unsigned
 * int, this will return true, due to integer underflow.
 *
 * @param n number to check if its positive.
 * @return 0 if it's not positive, n if it is positive.
 */
int is_positive(unsigned int n) {
	return n;
}

int main(int argc, char *argv[]) {
	int boolean;

	if (argc != 2) {
		printf("Error: Please supply 1 number.\n");
		return -1;
	}

	boolean = atoi(argv[1]);

	if (boolean < 0) {
		printf("Error: Please supply an unsigned int (non-negative).\n");
		return -1;
	}

	boolean = is_positive(boolean);
	if (boolean)
		boolean = 1;
	else
		boolean = 0;

	printf("%d\n", boolean);

	return 0;
}
