#include <stdio.h>
/**
 * main - Printing the size of the types
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a;
	long long int b;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
