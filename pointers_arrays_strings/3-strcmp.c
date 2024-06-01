#include "main.h"
/**
 * _strcmp - returns the difference in the value of 2 strings' total values
 * which is evaluated by adding up the ASCII codes of all chars in the strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
    int s1Total;
    int s2Total;
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        s1Total += s1[i];
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        s2Total += s2[i];
    }

	return (s2Total - s1Total);
}
