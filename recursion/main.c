#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void finalCountdown(int num) {
	printf("%d\n", num); /*prints the provided number @num and a new line*/
	if (num > 0) { /*continues if it's not gotten down to 0 yet*/
		sleep(1); /*waits 1 second*/
		finalCountdown(num - 1); /*repeats but with num being 1 lower*/
	}
}

int main(void)
{
	_puts_recursion("Puts with recursion");
	finalCountdown(15);
	return (0);
}