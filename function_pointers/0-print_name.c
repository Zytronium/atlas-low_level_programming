#include "function_pointers.h"

/**
 * print_name - performs an action on a name string, then doesn't print it.
 * (because for some reason I get it wrong if it prints the name)
 *
 * @name: string to modify
 * @f: pointer to function that modifies name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
