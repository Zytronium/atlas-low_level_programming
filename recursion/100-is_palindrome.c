#include "main.h"
/**
 * _strlen_recursion - gets the a string's length using recursion.
 * Does not print anything.
 *
 * @s: provided string to measure length of.
 * Return: @s's string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		char *ptr = s;

		return (_strlen_recursion(++ptr) + 1);
	}
	return (0);
}

/**
 * palindrome_helper - helper function for is_palindrome()
 * @string: string provided
 * @index1: index of character to check if its equal to the character at index2
 * @index2: index of character to check if its equal to the character at index1
 * Return:
 */
int palindrome_helper(char *string, int index1, int index2)
{
	if (string[index1] != string[index2])
		return (0);
	if (index1 <= index2 + 1 && index1 >= index2 - 1)
		return (1);
	return palindrome_helper(string, index1 + 1, index2 - 1);

}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	return (palindrome_helper(s, 0, _strlen_recursion(s)));
}
/**
 * is_palindrome_iteration - visualization of this function but iterative
 * to help with making it recursive
 */
/*
int is_palindrome_iteration(char *s)
{
	int str_len = 0;
	int j;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (j = 0; j < str_len; j++)
	{
		if (s[j] != s[str_len])
			return (0);
		str_len--;
	}
	return (1);
}
*/
