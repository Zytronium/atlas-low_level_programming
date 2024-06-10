#include "main.h"

int wildcmp_helper(char *s1, char *s2, int index)
{
	if (s1[index] != s2[index] && s2[index] != '*')
		return (0);
	if (s2[index] == '*')
	{
		/*TODO: allow any string of ANY LENGTH to be in place of this single '*' char*/
		/*
		 * creat 2 index variables instead of 1
		 * index1++ until s1[index1] == s2[index2]
		 * may or may not need a second helper function to avoid loops, but most likely NOT
		 */
	}

	return wildcmp_helper(s1, s2, index + 1);
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
	return (wildcmp_helper(s1, s2, 0));
}
