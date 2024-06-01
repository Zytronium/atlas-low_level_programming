#include "main.h"
/**
 * leet - turns the letters a e o t and l into 4 3 0 7 and 1, respectively.
 * Not case sensitive.
 * @str string to be modified
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	int aeotl = 0;
	char letters[10] = "aeotlAEOTL";

	while (str[i]) {
		char c = str[i];
			for (j = 0; letters[j]; j++)
			{
				if (c == letters[j])
					aeotl = 1;
			}
		while (aeotl)
		{
			while (c == 'a' || c == 'A')
				c = '4';
			while (c == 'e' || c == 'E')
				c = '3';
			while (c == 'o' || c == 'O')
				c = '0';
			while (c == 't' || c == 'T')
				c = '7';
			while (c == 'l' || c == 'L')
				c = '1';

			aeotl = 0;
			str[i] = c;
		}
		i++;
	}
	return (str);
}
