#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;

	printf("The size of an integer is %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a character is %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
