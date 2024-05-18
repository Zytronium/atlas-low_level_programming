#include <stdio.h>

int main(void)
{
    char digit;

    /* Print digits 0-9 and letters a-f in a single loop*/
    for (digit = '0'; digit <= 'f'; digit++)
    {
        if ((digit <= '9') || (digit >= 'a'))
        {
            putchar(digit);
        }
    }

    /* Print newline*/
    putchar('\n');

    return 0;
}

