#ifndef main_h
#define main_h

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int _strlen_recursion2(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
float _sqrt_part_two(float n, float m);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int prime_helper(int n, int guess);
int is_palindrome(char *s);
int palindrome_helper(char *string, int index1, int index2);
int wildcmp(char *s1, char *s2);
int wildcmp_helper(char *s1, char *s2, int index1, int index2);
int while_loop_helper(char *str, int i, char c, int equals);

#endif
