#include "main.h"

/**
 * main - entry point
 * Description:  prints _putchar, followed by a new line
 *                                                                                * Return: 0                                                                      */

int main(void)
{
	int i;
	char *string = "_putchar";

	i = 0;
	while (i<8)
	{
		_putchar(string[i]);
		i++;
	}
       _putchar('\n');

        return(0);
} 
