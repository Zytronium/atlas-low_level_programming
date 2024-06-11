#include "main.h"
/**
 * while_loop_helper - helper function for a while loop replacement lol
 * @str: string
 * @i: index
 * @c: character to look for
 * @equals: determine if we are looking for a match or absence of @c
 */
int while_loop_helper(char *str, int i, char c, int equals)
{
	if (equals)
	{
		if (str[i] != c)
		{
			i = (while_loop_helper(str, i + 1, c, equals));
		}
	}
	else
		if (str[i] == c)
		{
			i = (while_loop_helper(str, i + 1, c, equals));
		}

	return (i);
}

/**
 * wildcmp - helper function that compares two strings and returns
 * whether they are equal or not
 *
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 * @i1: index for string1
 * @i2: index for string2
 *
 * Return: 1 if both strings are equal, 2 if not.
*/
int wildcmp_helper(char *s1, char *s2, int i1, int i2)
{
	/*int j;*/
	/*if (s1[i1] == '\0')
	{
		_putchar('\\');
		_putchar('0');
	}
	else
		_putchar(s1[i1]);

	_putchar('\t');

	if (s2[i2] == '\0')
	{
		_putchar('\\');
		_putchar('0');
	}
	else
		_putchar(s2[i2]);

	_putchar('\n');*/

	if ((!s1[i1] || !s2[i2]) && s2[i2] != '*')
	{
		/*_putchar('\n');*/
		/*if (s1[i1] == s2[i2])*/
			return (1);
		/*return (30);*/
	}

	if (s1[i1] != s2[i2] && s2[i2] != '*') {
		/*_putchar('\n');
		_putchar(s2[i2]);*/
		return (0);
	}
	/*_putchar('\n');
	_putchar('\n');*/

	/*for (j = 0; s2[j] != '\0'; j++)
	{
		_putchar(s2[j]);
	}*/

	if (s2[i2] == '*')
	{
		if (!s2[i2 + 1])
		{
			/*_putchar('\n');*/
			return (1);
		}
		i2 = while_loop_helper(s2, i2,'*', 0);
		i1 = while_loop_helper(s1, i1, s2[i2 + 1], 1);
		if (!s2[i2 + 1])
		{
			/*_putchar('\n');*/
			return (1);
		}

		if (!s1[i1] && !s2[i2 + 1])
		{
			/*_putchar('\n');*/
			return (1);
		}
		if (!s1[i1])
		{
			/*_putchar('\n');*/
			return (0);
		}
		return wildcmp_helper(s1, s2, i1, i2 + 1);

		/*if (s2[i2 + 1] == '*')
			return wildcmp_helper(s1, s2, i1, i2 + 1);
		if (s1[i1 + 1] == s2[i2 + 1])
			return wildcmp_helper(s1, s2, i1 + 1, i2 + 1);
		return wildcmp_helper(s1, s2, i1 + 1, i2);*/
	}
	/*if (s2[i2 - 1] == '*')
	{
		if (s1[i1] == s2[i2])
			return wildcmp_helper(s1, s2, i1 + 1, i2 + 1);
		return wildcmp_helper(s1, s2, i1 + 1, i2);
	}*/

	return wildcmp_helper(s1, s2, i1 + 1, i2 + 1);
	/*DONE(?): allow any string of ANY LENGTH to be in place of this single '*' char*/
	/*
	* [✔] create 2 index variables instead of 1
	* [✔] i1++ until s1[i1] == s2[i2]
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
	/*_putchar('\n');*/
	return (wildcmp_helper(s1, s2, 0, 0));
}
