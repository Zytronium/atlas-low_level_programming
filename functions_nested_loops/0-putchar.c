#include "main.h"

/**
 * main - entry point
 * Description:  prints _putchar, followed by a new line
 *                                                                                * Return: 0                                                                      */

int main(void)
{
	int i;
	char *string = "_putchar";

	while (i<8)
	{
		_putchar(string[i]);
		i++;
	}
       _putchar('\n');

        return(0);
} 
