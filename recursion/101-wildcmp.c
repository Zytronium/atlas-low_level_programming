#include "main.h"

/**
 * while_loop_helper - helper function for a while loop replacement
 * @str: string
 * @i: index
 * @c: character to look for
 * @equals: determine if we are looking for a match or absence of @c
 * Return: index to set something to
 */
int while_loop_helper(char *str, int i, char c, int equals)
{
	if (equals)
	{
		if (str[i] != c)
			i = (while_loop_helper(str, i + 1, c, equals));
	}
	else
	{
		if (str[i] == c)
			i = (while_loop_helper(str, i + 1, c, equals));
	}
	return (i);
}

/**
 * is_all_stars - helper function to check if string is all '*'s
 * @str: string
 * @i: index
 * Return: true or false
 */
int is_all_stars(char *str, int i)
{
	if (str[i] == '\0')
		return (1);
	if (str[i] != '*')
		return (0);
	return (is_all_stars(str, i + 1));
}

/**
 * wildcmp_helper - helper function that compares two strings and returns
 * whether they are equal or not
 *
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 * @i1: index for string1
 * @i2: index for string2
 * Return: 1 if both strings are equal, 2 if not.
*/
int wildcmp_helper(char *s1, char *s2, int i1, int i2)
{
	if ((!s1[i1] || !s2[i2]) && s2[i2] != '*')
	{
		if (s1[i1] == s2[i2])
			return (1);
		return (0);
	}
	if (s1[i1] != s2[i2] && s2[i2] != '*')
	{
		if (s2[i2 + 1] == '*')
			return (0);
		else
			return (1);
	}
	if (s2[i2] == '*')
	{
		if (!s2[i2 + 1])
			return (1);
		i2 = while_loop_helper(s2, i2,'*', 0) - 1;
		i1 = while_loop_helper(s1, i1, s2[i2 + 1], 1);
		return wildcmp_helper(s1, s2, i1, i2 + 1);
	}
	return wildcmp_helper(s1, s2, i1 + 1, i2 + 1);
}

/**
 * wildcmp - compares two strings and returns whether they are equal or not
 *
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 * Return: 1 if both strings are equal, 2 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (is_all_stars(s2, 0))
		return (1);
	return (wildcmp_helper(s1, s2, 0, 0));
}
