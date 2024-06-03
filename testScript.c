#include <stdio.h>
/**
 * main - descr.
 *
 * Return: 0
 */
int main(void)
{
	int var = 21;
	int num = 4;
	int *ptr1 = &var;
	int *ptr2 = ptr1;

	printf("int var = 21;\nint num = 4;\nint *ptr1 = &var;\nint *ptr2 = ptr1;\n\n");

	printf("value of var: %d\t\t\t\tvalue of num: %d\n", var, num);
	printf("ptr1 points to: %p\t\t\tptr2 points to: %p\n", ptr1, ptr2);
	printf("value of what ptr1 points to: %d\t\tvalue of what ptr2 points to: %d\n", *ptr1, *ptr2);
	printf("var's memory address: %p\t\tnum's memory address: %p\n", &var, &num);
	printf("ptr1's memory address: %p\t\tptr2's memory address: %p\n\n\n", &ptr1, &ptr2);

	ptr2 = num;
	*ptr1 = 17;

	printf("ptr2 = num;\nptr1 = &ptr2;\n\n");

	printf("value of var: %d\t\t\t\tvalue of num: %d\n", var, num);
	printf("ptr1 points to: %p\t\t\t\tptr2 points to: %p\n", ptr1, ptr2);
	printf("value of what ptr1 points to: %d\t\tvalue of what ptr2 points to: %d\n", *ptr1, *ptr2);
	printf("var's memory address: %p\t\tnum's memory address: %p\n", &var, &num);
	printf("ptr1's memory address: %p\t\tptr2's memory address: %p\n\n\n", &ptr1, &ptr2);

	ptr2 = 9;

	printf("ptr2 = 9;\n\n");

	printf("value of var: %d\t\t\t\tvalue of num: %d\n", var, num);
	printf("ptr1 points to: %p\t\t\t\tptr2 points to: %p\n", ptr1, ptr2);
	printf("value of what ptr1 points to: %d\t\tvalue of what ptr2 points to: %d\n", *ptr1, *ptr2);
	printf("var's memory address: %p\t\tnum's memory address: %p\n", &var, &num);
	printf("ptr1's memory address: %p\t\tptr2's memory address: %p\n\n\n", &ptr1, &ptr2);

	ptr1 = &var;

	printf("ptr1 = &var;\n\n");

	printf("value of var: %d\t\t\t\tvalue of num: %d\n", var, num);
	printf("ptr1 points to: %p\t\t\tptr2 points to: %p\n", ptr1, ptr2);
	printf("value of what ptr1 points to: %d\t\tvalue of what ptr2 points to: %d\n", *ptr1, *ptr2);
	printf("var's memory address: %p\t\tnum's memory address: %p\n", &var, &num);
	printf("ptr1's memory address: %p\t\tptr2's memory address: %p\n\n\n", &ptr1, &ptr2);

	return (0);
}
