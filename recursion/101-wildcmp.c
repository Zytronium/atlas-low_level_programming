#include "main.h"

int wildcmp_helper(char *s1, char *s2, int index1, int index2)
{
	if (s1[index1] == '\0')
	{
		_putchar('\\');
		_putchar('0');
	}
	else
		_putchar(s1[index1]);

	_putchar('\t');

	if (s2[index2] == '\0')
	{
		_putchar('\\');
		_putchar('0');
	}
	else
		_putchar(s2[index2]);

	_putchar('\n');


	if (s1[index1] == '\0') {
		_putchar('\n');
		if (s1[index1] != s2[index2])
			return (0);
		return (1);
	}

	if (s2[index2] == '*')
	{
		return wildcmp_helper(s1, s2, index1, index2 + 1);
		/*if (s2[index2 + 1] == '*')
			return wildcmp_helper(s1, s2, index1, index2 + 1);
		if (s1[index1 + 1] == s2[index2 + 1])
			return wildcmp_helper(s1, s2, index1 + 1, index2 + 1);
		return wildcmp_helper(s1, s2, index1 + 1, index2);*/
	}
	if (s2[index2 - 1] == '*')
	{
		if (s1[index1] == s2[index2])
			return wildcmp_helper(s1, s2, index1 + 1, index2 + 1);
		return wildcmp_helper(s1, s2, index1 + 1, index2);
	}

	/*if (s1[index1] != s2[index2] && s2[index2] != '*') {
		_putchar('\n');
		return (0);
	}*/

	return wildcmp_helper(s1, s2, index1 + 1, index2 + 1);
	/*DONE(?): allow any string of ANY LENGTH to be in place of this single '*' char*/
	/*
	* [✔] create 2 index variables instead of 1
	* [✔] index1++ until s1[index1] == s2[index2]
	* [✖] may or may not need a second helper function to avoid loops, but most likely NOT
	*/
}

/**
 * wildcmp - compares two strings and returns whether they are equal or not
 *
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 *
 * Return: 1 if both strings are equal, 2 if not.
*/
int wildcmp(char *s1, char *s2)
{
	_putchar('\n');
	return (wildcmp_helper(s1, s2, 0, 0));
}
