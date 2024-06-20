#include "main.h"
#include <stdio.h>

/**
 * print_name - performs an action on a name string, then prints the string.
 *
 * @name: string to modify and print
 * @f: pointer to function that modifies name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("%s", name);
}
